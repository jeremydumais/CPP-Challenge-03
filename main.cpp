#include <iostream>
#include <conio.h>

using namespace std;

int GetInputNumber(string const &msg);

int main(int argc, char const *argv[])
{
    unsigned int number1 {0};
    unsigned int number2 {0};
    cout << "Greatest common divisor" << endl;
    number1 = GetInputNumber("Enter the first number : ");
    number2 = GetInputNumber("Enter the second number : ");

    //Calculation
    unsigned int minNumber = min(number1, number2);
    unsigned int gcd = 1;
    for(unsigned int i=1;i<=minNumber/2;i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
            gcd = i;
    }

    cout << "Greatest common divisor of " << number1 << " and " << number2 << " is " << gcd << endl;
    cout << "Press any key to continue... " << endl;
    getch();
    return 0;
}

int GetInputNumber(string const &msg)
{
    int retVal {0};
    cout << msg;
    
    while(!(cin >> retVal))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout << "Invalid number. Please try again : ";
    }
    return retVal;
}
