#include <iostream>
using namespace std;
int main()
{
    // taking input from user
    int a, b;                        // variable declaration
    cout << "enter  first number: "; // << is called insertion operator
    cin >> a;                        // >> is called extraetion operator
    cout << "enter second number: ";
    cin >> b;
    cout << "sum is : " << a + b << endl;

    // = is called assignment operator
    int c = 10;

    // == is called comparison operator
    // 2*3 == 5 -----> it will give 0 answer
    // 2*3 == 6 -----> it will give 1 answer

    // type casting
    int e = 10;
    char f = 'b';
    e = f; // storing char in int datatype
    cout << e << endl;

    int h = 66;
    f = h; // storing int in char datatype
    cout << f << endl;

    int k = 672;
    char l = 'a';
    l = k; // data loss here,in binary only last 8 bits value of 672 will store in char datatype
    cout << l << endl;
}; // we can add ; at the end of closing bracket
