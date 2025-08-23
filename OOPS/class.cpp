// Lecture # 70

#include <iostream>
using namespace std;

class student
{
private: // access modifier
    string name;
    int age, roll_number;
    string grade;
    // Function Getter and setter
public: // making function public
    void setName(string s)
    {
        name = s;
    }
    void setAge(int s)
    {
        age = s;
    }
    void setRoll_Number(int s)
    {
        roll_number = s;
    }
    void setGrade(string s)
    {
        grade = s;
    }

    void getName()
    {
        cout << name << endl;
    }
    void getAge()
    {
        cout << age << endl;
    }
    void getRoll_Number()
    {
        cout << roll_number << endl;
    }
    void getGrade()
    {
        cout << grade << endl;
    }

    // can also use this
    /*
    int getGrade()
    {
        return grade;
    }
    */
};

int main()
{
    // making object of class
    student s1;
    s1.setName("Gulshan");
    s1.setAge(20);
    s1.setRoll_Number(123);
    s1.setGrade("A+");

    // making object of class
    student s2;
    s2.setName("Rafay");
    s2.setAge(20);
    s2.setRoll_Number(22);
    s2.setGrade("A");

    // print s1 object
    s1.getName();
    s1.getAge();
    s1.getRoll_Number();
    s1.getGrade();

    // print s2 object
    s2.getName();
    s2.getAge();
    s2.getRoll_Number();
    s2.getGrade();
}