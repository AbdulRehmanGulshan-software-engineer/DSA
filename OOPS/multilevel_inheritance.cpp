// Lecture # 74
// Types Of Inheritance
// Type 02 : Multilevel Inheritance

#include <iostream>
using namespace std;

class person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello, my name is : " << name << endl;
    }
};

class employee : public person
{
protected:
    int salary;

public:
    void monthly_salary()
    {
        cout << "My monthly salary is : " << salary << endl;
    }
};

// multilevel inheritance ⬇️
class manager : public employee
{
public:
    string department;

    // constructor
    manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void work()
    {
        cout << "I am working at " << department << " department" << endl;
    }
};

int main()
{
    // created object for manager class
    manager A1("Rohit", 200, "Finance");
    A1.work();
    A1.monthly_salary();
    A1.introduce();
    // A1.salary = 10; // cannot be changed as it is private
}