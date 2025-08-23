// Lecture # 70
// In this lec part learned about how classes and objects are created dynamically

#include <iostream>
using namespace std;

class student
{
public: // access modifier
    string name;
    int age, roll;
    string grade;
};

int main()
{
    student *s = new student; // allocated memory dynamically
    // accessing class
    (*s).name = "Gulshan";
    (*s).age = 19;
    (*s).roll = 121;
    (*s).grade = "A+";

    // printing all
    // cout << (*s).name << endl;
    cout << s->name << endl;
    cout << s->age << endl;
    cout << s->roll << endl;
    cout << s->grade << endl;
}