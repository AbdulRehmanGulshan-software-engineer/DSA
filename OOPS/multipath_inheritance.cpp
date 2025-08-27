// Lecture # 74
//  Types Of Inheritance
//  Multipath Inheritance

#include <iostream>
using namespace std;

// human class
class human
{
public:
    string name;

    // created display function
    void display()
    {
        cout << "My name is " << name << endl;
    }
};

// engineer class
class engineer : public virtual human // virtual will handle multiple same things to be inherit only once,no confusion for compiler haha
{
public:
    string specialization;

    // function
    void work()
    {
        cout << "I have specialization in : " << specialization << endl;
    }
};

class youtuber : public virtual human
{
public:
    int subscriber;

    void content_creator()
    {
        cout << "I have subscriber base of : " << subscriber << endl;
    }
};

class code_teacher : public engineer, public youtuber
{
public:
    int salary;

    // constructor
    code_teacher(string name, string specialization, int subscriber, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
        this->salary = salary;
    }

    void print()
    {
        display();
        work();
        content_creator();
        cout << "My salary is " << salary << endl;
    }
};
int main()
{
    // created object
    code_teacher A1("Rohit", "CSE", 14321, 99);
    A1.print();
};