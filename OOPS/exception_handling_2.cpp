#include <iostream>
using namespace std;

// created class

int main()
{
    int a, b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;

    // exception handling method 01
    // if (b == 0)
    // {
    //     cout << "Divided by zero is not possible.\n";
    //     return 0;
    // }
    // int c = a / b;
    // cout << c << endl;

    // exception handling method 02
    try
    {
        if (b == 0)
            throw "Divided by zero is not possible.";
        int c = a / b;
        cout << c << endl;
    }
    catch (const char *e)
    {
        cout << "Exception Occurred : " << e << endl;
    }
}