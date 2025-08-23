// Lecture # 70

#include <iostream>
using namespace std;

class student // empty class
{
    // adding nothing
};

class a
{
    int b;
    int c;
    int d;
};

class users
{
    int b;
    char c;
    char d;

    // see padding difference by these below and commenting up
    /*
    char c;
    int b;
    char d;
    */
};

int main()
{
    // Note : Class size does't exists

    // made object named obj_01, for class a
    a obj_01;
    cout << sizeof(obj_01) << " "; // will print 12

    // made object named obj_02, for class student
    student obj_02;
    cout << sizeof(obj_02) << " "; // will print 1

    // made object named obj_03, for class users
    users obj_03;
    cout << sizeof(obj_03) << " "; // will print 8

    return 0;
};