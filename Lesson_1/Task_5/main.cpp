#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "enter tree size ";
    cin >> size;

    for (int i {0} ; i < size ; i++)
    {
        int j {0};

        while (size - i > j)
        {
            j++;
            cout << " ";
        }
        for ( j ; j - 1 < size + i ;)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
    }

    while (size > 0)
    {
        cout << " ";
        size -= 1;
    }
    cout << "*";

    return 0;
}
