#include <iostream>

using namespace std;

int main()
{
    int firstOperand;
    int secondOperand;
    char operand;

    cout << "This is simple calculator which supports 4 basic operations (+, -, *, /)";

    cout << "Enter first number: " << endl;
    cin >> firstOperand;

    cout << "Enter second number: " << endl;
    cin >> secondOperand;

    cout << "Enter operation" << endl;
    cin >> operand;

    switch(operand)
    {
        case '+':
            cout << firstOperand + secondOperand;
            break;
        case '*':
            cout << firstOperand * secondOperand;
            break;
        case '-':
            cout << firstOperand - secondOperand;
            break;
        case '/':
            cout << firstOperand / secondOperand;
            break;
        default:
            cout << "Something went wrong";
    }
}
