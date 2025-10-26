// we will study += , -+
#include <iostream>
using namespace std;

// create a class
class marks
{
    int mark;

public:
    // constructor
    marks()
    {
        this->mark = 0;
    }
    // parameterized constructor
    marks(int mark)
    {
        this->mark = mark;
    }
    // display function
    void display()
    {
        cout << mark << endl;
    }
    // overloading += operator as member function
    void operator+=(int bonusmark)
    {
        mark = mark + bonusmark;
    }
    // overloading -= operator
    void operator-=(int lessmark)
    {
        mark = mark - lessmark;
    }
};

int main()
{
    // creating object
    marks m1(20);
    marks m2(35);
    m1 += 20;
    m2 -= 30;
    m1.display();
    m2.display();
    return 0;
}