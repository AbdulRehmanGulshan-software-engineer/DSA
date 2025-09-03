// Lecture # 76
// in this code we will see even we can use if-else to handle exceptions so why these try,throw,catch 😂 ,lets understand

#include <iostream>
#include <exception>
using namespace std;


int main()
{
    try
    {
        int *p = new int[1000000000000000];
        cout << "Memory allocation is successful\n";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception Occurred due to line 11 : " << e.what() << endl; // in my compiler its not working,new dost throw exception in new compilers
    }
}