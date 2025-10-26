#include <iostream>
using namespace std;
// creating class
class student
{
public:
    string name;
    int age, rollNumber;
    string dob;
};

int main()
{
    // creating objects dynamically
    student *s1 = new student;
    (*s1).name = "Abdul Rehman Gulshan";
    (*s1).age = 19;
    (*s1).rollNumber = 19;
    s1->dob = "14-May-2006";

    cout << s1->name << endl;
    cout << s1->age << endl;
    cout << s1->rollNumber << endl;
    cout << s1->dob << endl;
}