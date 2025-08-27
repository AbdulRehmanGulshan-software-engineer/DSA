// Lecture # 74
//  Types Of Inheritance
//  Type 04 : Hierarchical Inheritance

#include <iostream>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
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

    // display function
    void display()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Roll Number : " << roll_number << endl
             << "Fees : " << fees << endl;
    }
};

class teacher : public human
{
    int salary;

public:
    // calling constructor
    // teacher(int salary, string name, int age)   // this will give error as it wii try to first create/call default constructor of human ,but it was not present in human(kuke humne jo default constructor human me bnaya hai usse 2 arguments cahhiye),but we did't do it here
    teacher(int salary, string name, int age) : human(name, age) // will run fine
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << name << " " << age << " " << salary << endl;
    }
};
int main()
{
    // created student object
    student A1("Rohit", 26, 32, 99);
    // this ⬇️ will call display fuction in child
    A1.display();

    teacher A2(21000, "Rohit", 24);
    A2.display();
}