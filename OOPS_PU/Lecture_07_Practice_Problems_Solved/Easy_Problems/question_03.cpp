/*
 Declare a pointer to a float, allocate memory with new, assign
value 3.14, print it, and delete it
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // pointer declaration
    // float *p;
    // p = new float(3.14);

    float *p = new float;
    cout << "Entered Value : ";
    cin >> *p;

    cout << "Entered Value Is : " << *p << endl;
    delete p;
    return 0;
}