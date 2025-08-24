#include <iostream>
using namespace std;

class customer
{
    string name;
    int account_number;
    int balance;

public:
    customer()
    {
        name = "XXXX";
        account_number = 0;
        balance = 0;
    }

    // inline constructor
    inline customer(string a, int b, int c) : name(a), account_number(b), balance(c) {}

    // constructor overloading
    customer(string name, int account_number)
    {
        this->name = name;
        this->account_number = account_number;
        balance = 0;
    }

    // copy constructor,it is present by default,this one our own made
    customer(customer &B) // adding reference symbol,as there is no default copy constructor remained when we create our own
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << endl;
    }
};

// main function
int main()
{
    customer A1;
    customer A2("Gulshan", 23, 1000);
    customer A3("Rafay", 18);
    customer A4(A2);
    // new method ⬇️
    customer A5;
    A5 = A3;

    // displaying all
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();
}