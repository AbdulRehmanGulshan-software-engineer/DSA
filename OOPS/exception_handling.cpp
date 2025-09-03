// Lecture # 76
// Handling exceptions by if,else if

#include <iostream>
using namespace std;

// created class named customer
class customer
{
    string name;
    int balance, account_number;

public:
    // created constructor
    customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit function
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " Rs is credited successfully.\n";
        }
        else
        {
            cout << "amount should be greater than 0.\n";
        }
    }

    // withdraw function
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " Rs is debited successfully.\n";
        }
        else if (amount <= 0)
        {
            cout << "amount should be greater than 0.\n";
        }
        else
        {
            cout << "balance is low.\n";
        }
    }
};

int main()
{
    customer C1("Rohit", 5000, 10);
    C1.deposit(100);
    C1.withdraw(6000);
}