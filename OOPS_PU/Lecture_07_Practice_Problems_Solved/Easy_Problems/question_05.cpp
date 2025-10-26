/*
Demonstrate pointer arithmetic with an integer array (move
pointer forward and backward)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int arr[20];
    int min = 5;
    int max = 40;

    for (int i = 0; i < 20; i++)
        arr[i] = (rand() % (max - min + 1)) + min;

    int *p = arr;
    // Forward traversal
    for (int i = 0; i < 20; i++)
    {
        cout << *p << " ";
        p++;
    }

    // Backward traversal
    cout << endl;
    int *c = arr;
    c = arr + 19;
    for (int i = 19; i >= 0; i--)
    {
        cout << *c << " ";
        c--;
    }

    // Random access with pointer arithmetic
    cout << endl;
    int *d = arr;
    cout << "5th element : " << *(d + 4) << endl; // same as arr[4] , 5th element
    cout << "3rd element : " << *(d + 2) << endl; // same as arr[2] , 3rd element

    // Pointer difference
    int *p1 = arr;
    int *p2 = arr + 10;
    cout << p1 << endl;
    cout << p2 << endl;
    cout << "Distance = " << (p2 - p1) << endl;

    // Address printing
    int *g = arr;
    for (int i = 0; i < 20; i++)
    {
        cout << "Address : " << g << " Value " << *g << endl;
        g++;
    }
    return 0;
}