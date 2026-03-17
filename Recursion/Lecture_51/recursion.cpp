#include <iostream>
using namespace std;
// function prototypes
void fun3(int n);
void fun2(int n);
void fun1(int n);
void fun0(int n);

int main()
{
    int n = 3;
    // // iterative approach 👇
    // for (int i = n; i > 0; i--)
    // {
    //     cout << i << " days left in birthday." << endl;
    // }
    // cout << "Happy Birthday." << endl;

    fun3(3);
    return 0;
}

// functions definitions
void fun3(int n)
{
    // handled base case
    if (n == 0)
    {
        cout << "Happy Birthday" << endl;
        return;
    }
    cout << n << " days left in birthday." << endl;
    fun3(n - 1);
}
void fun2(int n)
{
    cout << n << " days left in birthday." << endl;
    fun1(n - 1);
}
void fun1(int n)
{
    cout << n << " days left in birthday." << endl;
    fun0(n - 1);
}
void fun0(int n)
{
    cout << "Happy Birthday." << endl;
}