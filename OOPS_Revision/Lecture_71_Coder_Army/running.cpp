#include <iostream>
using namespace std;

class customer
{
    string name;
    int *data;

public:
    // creating default constructor
    customer()
    {
        name = "4";
        cout << "constructor : " << name << endl;
    }
    // creating constructor
    customer(string name)
    {
        this->name = name;
        cout << "Constructor : " << name << endl;
    }

    // creating destructor
    ~customer()
    {
        cout << "destructor : " << name << endl;
    }
};
int main()
{
    customer A1("1"), A2("2"), A3("3");
    customer *A4 = new customer;
    delete A4;
}