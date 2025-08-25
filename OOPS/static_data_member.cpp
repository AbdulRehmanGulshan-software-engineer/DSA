// Lecture # 72
// they are attributes of classes or class member

#include <iostream>
using namespace std;

// created a class named customers
class customer
{
    string name;
    int account_number;
    int balance;

public:
    // created total_customer using static,all objects will point this integer,its public so we can access it even without object
    static int total_customers;
    // making constructor
    customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customers++;
    }

    // display function
    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << total_customers << endl;
    }

    void display_total_customers()
    {
        cout << total_customers << endl;
    }
};
// initialized a static member
int customer::total_customers = 0;

// main function
int main()
{
    // created objects
    customer A1("gulshan", 231, 1000);
    customer A2("faizan", 578, 2000);
    A1.display_total_customers();
    customer A3("rafay", 345, 5000);
    A1.display_total_customers();

    // accessing without object ,because it is member of class,we made it public first ... remember
    customer::total_customers = 5;
    A1.display_total_customers();
}