// Lecture # 72

#include <iostream>
using namespace std;

// created a class named customers
class customer
{
    string name;
    int account_number;
    int balance;
    // created total_customer using static,all objects will point this integer
    static int total_customers; // static member function can direct access on it
    static int total_balance;

public:
    // making constructor
    customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customers++;
        total_balance += balance;
    }

    // creating static member function
    static void access_static() // can access only static datatypes
    {
        cout << "-------Report-------" << "\n"
             << "Total Customers : " << total_customers << "\n"
             << "Total Balance : " << total_balance << endl;
    }

    // deposit money function
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    // withdraw money function
    void withdraw(int amount)
    {
        if (amount > 0 && amount < balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    // display function
    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }

    void display_total_customers()
    {
        cout << total_customers << endl;
    }
};
// initialized a static member
int customer::total_customers = 0;
int customer::total_balance = 0;

// main function
int main()
{
    // created objects
    customer A1("gulshan", 231, 1000);
    customer A2("faizan", 578, 2000);
    // A2.display_total_customers(); // can be access with objects name not class name like customer::display_total_customer
    customer A3("rafay", 345, 5000);
    customer A4("maryam", 56, 3500);
    // customer::display_total_customers(); // it is member of object we cannot access it with class it is not part of class

    // adding Rs:10000 to maryam's account
    A4.deposit(10000);

    // withdraw money from gulshan's account
    A1.withdraw(10);

    // display all objects
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    customer::access_static();
}