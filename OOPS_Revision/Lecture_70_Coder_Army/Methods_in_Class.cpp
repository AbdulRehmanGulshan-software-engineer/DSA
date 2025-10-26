#include <iostream>
using namespace std;

class student
{
    // by default private access modifier
    string name;
    int age, rollNumber;
    string grade;

public:
    // creating functions (jisko hum method bhi kehte hain)
    // Function Getter and Setter
    void setName(string n)
    {
        if (n.size() == 0)
        {
            cout << "Ivalid Name : ";
            return;
        }
        name = n; // within class mai iske data member ko access kr skta hun beshak wo private ho
    }

    void setAge(int n)
    {
        age = n;
    }
    void setRollNumber(int n)
    {
        rollNumber = n;
    }
    void setGrade(string n)
    {
        grade = n;
    }
    void getName()
    {
        cout << name << endl;
    }
    void getAge()
    {
        cout << age << endl;
    }
    void getRollNumber()
    {
        cout << rollNumber << endl;
    }
    void getGrade()
    {
        cout << grade << endl;
    }
    int get_roll_number()
    {
        return rollNumber;
    }
    string get_grade(int pin)
    {
        if (pin == 123)
            return grade;
        else
            return "";
    }
};
int main()
{
    // creating object of student class
    student s1;
    s1.setName("Abdul Rehman Gulshan");
    s1.setAge(19);
    s1.setRollNumber(19);
    s1.setGrade("A+");
    s1.getName();
    s1.getAge();
    s1.getRollNumber();
    s1.getGrade();
    cout << s1.get_roll_number() << endl;
    cout << s1.get_grade(123) << endl;
}