#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age, rollNumber;
    string grade;
};
int main()
{
    // creating object of student class
    student s1;
    s1.name = "Abdul Rehman Gulshan";
    s1.age = 19;
    s1.rollNumber = 19;
    s1.grade = "F-";

    // printed data of object 1
    cout << s1.name << " " << s1.age << " " << s1.rollNumber << " " << s1.grade << endl;

    // creating second object of student class
    student s2;
    s2.name = "Saad Mujib";
    s2.age = 19;
    s2.rollNumber = 42;
    s2.grade = "A+";
    // printed data of second object
    cout << s2.name << " " << s2.age << " " << s2.rollNumber << " " << s2.grade;
}