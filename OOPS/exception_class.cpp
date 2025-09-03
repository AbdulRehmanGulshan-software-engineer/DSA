#include <iostream>
using namespace std;

// we will see how our exception class (present by default) actually looks
class exception
{
protected:
    string msg;

public:
    // constructor
    exception(string msg)
    {
        this->msg = msg;
    }

    // what function : its work is to print the exception that comes
    string what()
    {
        return msg;
    }
}

int
main()
{
    try
    {
        int *p = new int[100000000000000000000];
        cout << "Memory Allocation Is Successful\n";
        delete[] p;
    }
    // catch (const exception &e)  OR 👇
    catch (const bad_alloc &e)
    {
        cout << "Exception Occurred Due To Line 27 : " << e.what() << endl;
    }
}