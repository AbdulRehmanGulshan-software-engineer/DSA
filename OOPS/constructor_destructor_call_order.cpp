#include <iostream>
using namespace std;

class customer
{
    string name;
    int *data;

public:
    // default constructor
    customer()
    {
        name = "4";
        cout << "constructor is " << name << endl;
    }
    // paramtricol constructor
    customer(string name)
    {
        this->name = name;
        cout << "constructor is " << name << endl;
    }

    // destructor
    ~customer()
    {
        cout << "destructor is " << name << endl;
    }
};

// main function
int main()
{
    customer A1("1"), A2("2"), A3("3");
    // making object dynamically
    customer *A4 = new customer; // destructor is not called ???? why
    // for releasing A4
    delete A4; // now destructor will call,use delete to call destructor manually
}