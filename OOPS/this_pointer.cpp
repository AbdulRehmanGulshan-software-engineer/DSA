// lecture 71
// Using This Pointer : The this pointer stores the address of the object that calls it.

#include <iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;

public:
    // Default Constructor , has no return type , will automatically call ⬇️
    customer()
    {
        // initializing values
        name = "Gulshan", account_number = 5;
        balance = 100;
    }
    // creating parameterized constructor ⬇️
    customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    // Constructor Overloading
    customer(string name, int account_number)
    {
        this->name = name;
        this->account_number = account_number;
        balance = 50; // by default initializing it
    }
    // making function for output ⬇️
    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << endl;
    }
    // customizing constructor
};

int main()
{
    // creating object,without passing arguments
    customer A1;
    // ceating object ,with passing arguments
    customer A2("Saikhu", 23, 100000);
    // object with two arguments
    customer A3("Faizan", 19);
    // calling display function
    A1.display();
    A2.display();
    A3.display();
}
