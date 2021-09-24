#include <iostream>
#include "largestNum.h"

#define RESET "\033[0m"
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDGREEN "\033[1m\033[32m"

using namespace std;

void printAnswer(string msg, size_t num)
{
    cout << BOLDGREEN << msg << num << RESET << endl;
}

void printError(string errMessage)
{
    cerr << BOLDYELLOW << errMessage << RESET << endl;
}

int main()
{
    bool cont = true;
    while (cont)
    {
        cout << "Input number: ";
        string input;
        try
        {
            getline(cin, input);
            if (!input.length())
            {
                throw invalid_argument("Empty input is not allowed");
            }
            printAnswer("Largest number: ", largestNum(input));
        }
        catch (invalid_argument &e)
        {
            printError(e.what());
        }
        cout << "Do you wish to continue? [Y/N] ";
        getline(cin, input);
        cont = input.length() == 1 && (input[0] == 'y' || input[0] == 'Y');
    }
    return 0;
}