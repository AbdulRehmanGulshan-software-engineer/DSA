#include <iostream>
using namespace std;
int main()
{
    int x = 1234;
    char *p = (char *)&x;

    cout << "Int x = " << x << endl;
    cout << "Bytes : ";
    for (int i = 0; i < sizeof(x); i++)
    {
        cout << (int)(unsigned char)p[i] << " ";
    }
}