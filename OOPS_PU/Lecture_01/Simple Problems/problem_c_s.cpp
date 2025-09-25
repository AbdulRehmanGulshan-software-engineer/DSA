/*
c. Write a program to accept three numbers and print them in order using if statements
Input: Enter three numbers: 12 5 20
Output: Numbers in ascending order: 5 12 20
*/

#include <iostream>
using namespace std;
int main()
{
    // input three numbers
    int n1, n2, n3;
    cout << "enter three numbers : ";
    cin >> n1 >> n2 >> n3;

    // simple approach : comparison logic using composite if
    // if (n2 <= n1 && n1 <= n3)
    //     cout << n2 << " " << n1 << " " << n3 << endl;
    // else if (n1 <= n2 && n2 <= n3)
    //     cout << n1 << " " << n2 << " " << n3 << endl;
    // else if (n2 <= n3 && n3 <= n1)
    //     cout << n2 << " " << n3 << " " << n1 << endl;
    // else if (n3 <= n1 && n1 <= n2)
    //     cout << n3 << " " << n1 << " " << n2 << endl;
    // else if (n3 <= n2 && n2 <= n1)
    //     cout << n3 << " " << n2 << " " << n1 << endl;
    // else if (n1 <= n3 && n3 <= n2)
    //     cout << n1 << " " << n3 << " " << n2 << endl;

    // using efficient approach 👇
    if (n2 <= n1)
        if (n1 <= n3)
            cout << n2 << " " << n1 << " " << n3 << endl;
        else if (n2 <= n3)
            cout << n2 << " " << n3 << " " << n1 << endl;
        else
            cout << n3 << " " << n2 << " " << n1 << endl;
    else
        if (n2 <= n3)
        cout << n1 << " " << n2 << " " << n3 << endl;
    else if (n1 <= n3)
        cout << n1 << " " << n3 << " " << n2 << endl;
    else
        cout << n3 << " " << n1 << " " << n2 << endl;

    return 0;
}