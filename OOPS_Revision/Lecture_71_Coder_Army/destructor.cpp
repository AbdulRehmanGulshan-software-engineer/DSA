// Actually destructor is used to free space used dynamically or we can say closing file,etc .Not for releasing memory of object
#include <iostream>
using namespace std;

class customer
{
    string name;
    int *data;

public:
    // Constructor
    customer()
    {
        name = "Gulshan";
        data = new int;
        *data = 45000;
        cout << "constructor is called" << endl;
    }
    // Destructor
    ~customer()
    {
        delete data; // destructor ka main purpose
        cout << "destructor is called" << endl;
    }
};
int main()
{
    customer A1;
}