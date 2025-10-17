#include <iostream>
using namespace std;
class customer
{
    string name;
    int account_number;
    int balance;
    int *roi;

public:
    // Default Constructor
    customer()
    {
        cout << "Hello I am constructor" << endl;
        name = "Abdullah";
        account_number = 69;
        balance = 20000;
        roi = new int[100];
    }

    // parameterized Constructor
    // customer(string name, int account_number, int balance)
    // {
    //     cout << "Hello I'm parameterized constructor." << endl;
    //     (*this).name = name; // same like       this->name = name
    //     this->account_number = account_number;
    //     this->balance = balance;
    // }
    customer(string name, int account_number)
    {
        cout << "Parameterized constructor with 2 arguments.";
        this->name = name;
        this->account_number = account_number;
        balance = 50;
    }

    // Inline Constructor
    inline customer(string a, int b, int c) : name(a), account_number(b), balance(c) {}

    // copy constructor
    customer(customer &a)
    {
        name = a.name;
        account_number = a.account_number;
        balance = a.balance;
    }

    // Function For Printing
    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    customer A1, A2, A3;
    customer A4("Gulshan", 19, 50000);
    customer A5("Saadi", 78);
    customer A6(A1);
    customer A7;
    A7 = A4; // assignment operator
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();
    A6.display();
    A7.display();
}