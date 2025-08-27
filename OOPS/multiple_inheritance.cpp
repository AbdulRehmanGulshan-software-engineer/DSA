// Lecture # 74
// Types Of Inheritance
// Type 03 : Multiple Inheritance -> "Multiple inheritance in Object-Oriented Programming (OOP) is a feature that allows a class to inherit properties and methods from more than one parent (or base) class. "

#include <iostream>
using namespace std;

class engineer
{
    // private ⬇️
    void money()
    {
        cout << "hello money";
    }

public:
    string specialization;

    // default constructor
    engineer()
    {
        cout << "hello engineer\n";
    }

    // function
    void work()
    {
        cout << "I have specialization in : " << specialization << endl;
    }
};

class youtuber
{
public:
    int subscriber;

    // default constructor
    youtuber()
    {
        cout << "hello youtuber\n";
    }

    void content_creator()
    {
        cout << "I have subscriber base of : " << subscriber << endl;
    }
};

class code_teacher : public engineer, public youtuber
{
public:
    string name;

    // default constructor
    code_teacher()
    {
        cout << "hello code_teacher" << endl;
    }

    // constructor
    code_teacher(string name, string specialization, int subscriber)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
    }

    // display function
    void showcase()
    {
        cout << "My name is : " << name << endl;
        work();
        content_creator();
    }
};
int main()
{
    // created object
    code_teacher A1("Rohit", "youtuber_coder", 14321);
    A1.showcase();
    // A1.money(); // can't accessed as it is private

    code_teacher A2;
};