#include <iostream>

using namespace std;

int main()
{
    int firstOperand;
    int secondOperand;
    char operand;

    cout << "Input first operand: " << endl;
    cin >> firstOperand;

    cout << "Input second operand: " << endl;
    cin >> secondOperand;

    cout << "Input operation" << endl;
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
