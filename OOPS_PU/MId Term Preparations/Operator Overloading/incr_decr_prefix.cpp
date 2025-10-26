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
    void operator++()
    {
        mark += 1;
    }
    // overloading decrement operator
    void operator--()
    {
        mark -= 1;
    }
};
int main()
{
    // creating objects
    marks m1(10), m2(20);
    --m1;
    ++m2;
    m1.display();
    m2.display();
    return 0;
}