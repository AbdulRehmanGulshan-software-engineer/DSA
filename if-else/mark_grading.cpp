#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks: ";
    cin >> marks; // user input
    if (marks > 33)
        cout << "pass";
    else
        cout << "fail";
};