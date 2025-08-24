// making inline_constructor

#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    int roll_number;
    int *roi;

public:
    student()
    {
        name = "XXXXXX";
        age = 0;
        roll_number = 0;
        roi = new int[100]; // if hundred size array will not available my code wil give error,and this error is good,no time wastage,money wastage
    }

    // inline constructor
    inline student(string a, int b, int c) : name(a), age(b), roll_number(c) {}

    // constructor overloading
    inline student(string name, int age) : name(name), age(age) { roll_number = 0; } // When you build this object, construct name with n and construct age with a
    /*
    The initializer list is used to create/initialize members before the constructor body starts.
    At that exact moment:

    The object is not fully built yet.

    So this pointer is not guaranteed to exist.

    That’s why C++ does not allow this in initializer list.
    */

    // created display function ⬇️
    void display()
    {
        cout << name << " " << age << " " << roll_number << " " << endl;
    }
};
int main()
{
    // creating objects
    student A1;
    student A2("Rafay", 19, 1009);
    student A3("Abdul", 18);

    // calling display function
    A1.display();
    A2.display();
    A3.display();
}