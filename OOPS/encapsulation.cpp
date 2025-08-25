// Lecture # 72
// Encapsulation : wrapping up of data(variables) and information(functions) in a single unit(class),while controlling access to them(keeping variables private),just change the with functions that also have conditions
#include <iostream>
using namespace std;

// created class
class customer
{
    // below variables are private
    string name;
    int account_number;
    int balance = 0;
    static int total_accounts;
    static int total_balance;

public:
    // created constructor
    customer(string name, int account_number)
    {
        this->name = name;
        this->account_number = account_number;
        total_accounts++;
    }

    // deposit money function
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
        else
        {
            cout << "invalid amount";
        }
    }

    // withdraw money function
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
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

    // report display function
    static void report()
    {
        cout << "-------HBL Bank Ltd.-------" << "\n"
             << "Total Accounts : " << total_accounts << "\n"
             << "Total Balance : " << total_balance << endl;
    }
};
int customer::total_balance = 0;
int customer::total_accounts = 0;

// main function
int main()
{
    // created object
    customer A1("gulshan", 123);
    customer A2("saikhu", 124);
    A2.deposit(2100);
    A1.deposit(1100);
    A1.display();
    A2.display();
    customer::report();
}