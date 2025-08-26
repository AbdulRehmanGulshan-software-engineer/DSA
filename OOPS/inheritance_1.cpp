#include <iostream>
using namespace std;

// created parent class
class human
{
    string religion, color; // private: by default
public:
    string name;
    int age, weight;
};

// created child class
class student : protected human
{
private:
    int roll_number, fees;

public:
    //  creating constructor
    student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name : " << name << "\n"
             << "Age : " << age << "\n"
             << "Weight : " << weight << "\n"
             << "Roll Number : " << roll_number << "\n"
             << "Fees : " << fees << endl;
    }

    // // creating function
    // void fun(string a, int b, int c)
    // {
    //     name = a;
    //     age = b;
    //     weight = c;
    // }

    // // display output
    // void display()
    // {
    //     cout << name << " " << age << " " << weight << endl;
    // }
};

// creating child i.e.teacher class
class teacher : public human
{
    int salary, id;
};

int main()
{
    // created object for student class
    student a("Gulshan", 19, 57, 619, 73000);
    a.display();

    // created object for teacher class
    teacher b;
    b.name = "Abdul";
    b.age = 24;
    b.weight = 67;
}

// further when we study inheritance and multilevel inheritance our access modifier related concepts will become more strong that when to use which access modifier where?