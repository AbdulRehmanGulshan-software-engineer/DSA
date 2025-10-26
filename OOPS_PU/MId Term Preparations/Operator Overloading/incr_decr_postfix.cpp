// in this code we will write increment and decrement operator as prefix

#include <iostream>
using namespace std;
class marks
{
    int mark;

public:
    // default constructor
    marks()
    {
        this->mark = 0;
    };
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
    // overloading prefix ++
    marks operator++(int)
    {
        marks duplicate(*this);
        mark += 1;
        return duplicate;
    }
    // overloading decrement operator
    marks operator--(int)
    {
        marks duplicate(*this);
        mark -= 1;
        return duplicate;
    }
};
int main()
{
    // creating objects
    marks m1(10), m2(20);
    (m1--).display();
    (m2++).display();
    m1.display();
    m2.display();
    return 0;
}