#include "largestNum.h"
using namespace std;

void throwArgumentError(char c)
{

    throw invalid_argument(
        "Your input contains wrong item: ' " +
        string(1, c) +
        " '\nPlease try again and provide correct input");
}

size_t largestNum(string numberString)
{
    size_t i = -1, max = 0;
    while (++i < numberString.length())
    {
        char currentChar = numberString[i];
        if (!isdigit(currentChar))
        {
            throwArgumentError(currentChar);
        }
        size_t curNum = currentChar - '0';
        max = curNum > max ? curNum : max;
    }
    return max;
}