// Lecture # 73
// Types Of Inheritance
// Type 01 : Single Inheritance : "Single inheritance in Object-Oriented Programming (OOP) refers to a type of inheritance where a class can inherit from only one direct superclass (also known as a parent class or base class)."

#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
    // // constructor
    // human()
    // {
    //     cout << "Constructor -> hello human" << endl;
    // }

    // // destructor
    // ~human()
    // {
    //     cout << "Destructor -> hello human" << endl;
    // }

    human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    // function
    void work()
    {
        cout << "I am working" << endl;
    }
    void display()
    {
        cout << "Name : " << name << endl
             << "Age :" << age << endl;
    }
};

class student : public human
{
    // private by default
    int roll_number, fees;

public:
    // made constructor
    student(string name, int age, int roll_number, int fees) : human(name, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    // // created default constructor ⬇️
    // student()
    // {
    //     cout << "Constructor -> hello students" << endl;
    // }

    // // destructor
    // ~student()
    // {
    //     cout << "Destructor -> hello students" << endl;
    // }

    // display function
    void display()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Roll Number : " << roll_number << endl
             << "Fees : " << fees << endl;
    }
};

int main()
{
    // created student object
    student A1("Rohit", 26, 32, 99);
    // this ⬇️ will call display fuction in child
    A1.display();
    // student A1;

    // work function can be directly access by object
    // A1.work();
}