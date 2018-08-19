#include <iostream>
#include <conio.h>

using namespace std;

int GetInputNumber(string const &msg);

int main(int argc, char const *argv[])
{
    unsigned int number1 {0};
    unsigned int number2 {0};
    cout << "Least common multiple" << endl;
    number1 = GetInputNumber("Enter the first number : ");
    number2 = GetInputNumber("Enter the second number : ");

    //Calculation
    /*Ex : multiple of 3 are : 3, 6, 9, 12, 15 <- 
           multiple of 5 are : 5, 10, 15 <-
    */
    unsigned int result1 {number1};
    unsigned int result2 {number2};
    while(result1 != result2)
    {
        if (result1 < result2)
            result1 += number1;
        if (result2 < result1)
            result2 += number2;
    }

    cout << "Least common multiple of " << number1 << " and " << number2 << " is " << result1 << endl;
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
