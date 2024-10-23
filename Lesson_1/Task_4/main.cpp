#include <iostream>

using namespace std;

int main()
{
    int income;
    string reply;

    cout << "what is your income?"<< endl;
    cin >> income;

    if (income > 1000)
    {
        reply = "you are doing well";
    }
    if (income < 1000)
    {
        reply = "work more";
    }
    if (income > 999999)
    {
        reply = "wow you are millionaire";
    }

    cout << reply;

    return 0;
}
