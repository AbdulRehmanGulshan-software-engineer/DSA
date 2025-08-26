// Lecture # 72
// Abstraction in OOPS

#include <iostream>
using namespace std;

// created class
class customer
{
    string name;
    int balance;

public:
    // created constructor
    customer(string name, int balance)
    {
        this->name = name;
        this->balance = balance;
    }

    // created deposit function
    void deposit(int amount) // how this function work user will not see this,this is simply abstraction
    {
        if (amount > 0)
            balance += amount;
    }

    // created display is_function
    void display()
    {
        cout << name << " " << balance << endl;
    }
};
int main()
{
    customer A1("Rohit", 500);
    A1.display();
    A1.deposit(2300);
    A1.display();
}