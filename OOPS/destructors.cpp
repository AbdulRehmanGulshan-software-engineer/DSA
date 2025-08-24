#include <iostream>
using namespace std;

class customer
{
    string name;
    int *data;

public:
    // constructor
    customer()
    {
        name = "gulshan";
        data = new int;
        *data = 10;
        cout << "constructor is called" << endl;
    }

    // destructor, created only once as a last function
    ~customer()
    {
        // this destructor will release memory for dynamically allocated memory automatically,dont delete object from stack
        cout << "destructor is called" << endl;
    }
};

// main function
int main()
{
    customer A1;
}