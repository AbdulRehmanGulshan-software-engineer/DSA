/*
Task 3: Input two unsigned different characters and by applying bit-wise & with if-else checks,
print which of them is larger.
Sample Input: G b
Sample Output: b is larger
*/

#include <iostream>
using namespace std;
int main()
{
    // input two characters
    unsigned char a, b;
    cout << "enter first character : ";
    cin >> a;
    cout << "enter second character : ";
    cin >> b;

    if (a == b)
        cout << "Equal";
    else
        for (int i = 7; i >= 0; i--)
        {
            if (((1 << i) & a) && !((1 << i) & b))
            {
                cout << a << " is Larger";
                break;
            }
            else if (((1 << i) & b) && !((1 << i) & a))
            {
                cout << b << " is Larger";
                break;
            }
        }
}