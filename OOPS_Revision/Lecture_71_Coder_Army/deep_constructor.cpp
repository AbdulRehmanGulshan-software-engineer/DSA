// youtube video link : https://youtu.be/L0S4rYG-06o?si=ewixbrHkEVSUDOMX
// this topic is co-related to copy constructor
#include <iostream>
using namespace std;

class demo
{
    int a, *p;

public:
    // default constructor
    demo()
    {
        a = 0;
        p = new int;
        *p = 0;
    }
    demo(int a, int p)
    {
        this->a = a;
        this->p = new int;
        *this->p = p;
    }
    // using another method
    void update()
    {
        a = a + 1;
        *p = *p + 1;
    }
    void show()
    {
        cout << "A : " << a << endl;
        cout << "*P : " << *p << endl;
    }

    // making own copy constructor
    demo(demo &obj)
    {
        a = obj.a;
        p = new int;
        *p = *(obj.p);
    }
};
int main()
{
    // creating object
    demo ob1(5, 6);
    demo ob2(ob1); // here copy constructor will call by compiler
    ob1.update();
    ob1.show();
    ob2.show();
}