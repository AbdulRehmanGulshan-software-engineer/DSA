// Lecture # 73
// Inheritance,,,understanding public,private and protected variables behaviour

#include <iostream>
using namespace std;

// created class
class human
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void fun()
    {
        a = 10; // can accessed within same class
        b = 20; // can accessed within same class
        c = 30;
    }
};
int main()
{
    // created object
    human rohit;
    // rohit.a = 10; // can't accessed in external code,as it is private
    // rohit.b = 10; // can't accessed in external code,as it is protected
    rohit.c = 10; // can be accessed in external code
    rohit.fun();
}