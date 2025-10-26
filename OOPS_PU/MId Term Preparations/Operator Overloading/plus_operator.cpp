// operator overloading ka role apni custom built object pe operator ko kaam krwana hai jo pehle se compiler defined nhi rkhta
#include <iostream>
using namespace std;
// creating class
class marks
{
    int internal_marks;
    int external_marks;

public:
    // default constructor
    marks()
    {
        this->internal_marks = 0;
        this->external_marks = 0;
    }
    // parameterized constructor
    marks(int internal_marks, int external_marks)
    {
        this->internal_marks = internal_marks;
        this->external_marks = external_marks;
    };
    // display function
    void display()
    {
        cout << internal_marks << endl;
        cout << external_marks << endl;
    }
    // operator overloading
    marks operator+(marks &m)
    {
        marks ans;
        ans.internal_marks = internal_marks + m.internal_marks;
        ans.external_marks = external_marks + m.external_marks;
        return ans;
    }
};
int main()
{
    // creating 2 objects
    marks m1(10, 20), m2(30, 40);
    marks m3 = m1 + m2;
    m3.display();
}