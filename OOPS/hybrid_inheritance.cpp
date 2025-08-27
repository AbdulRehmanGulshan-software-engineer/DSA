#include <iostream>
using namespace std;

// student class
class student
{
public:
    void print()
    {
        cout << "i am student" << endl;
    }
};

// male class
class male
{
public:
    void maleprint()
    {
        cout << "i am male" << endl;
    };
};

// female class
class female
{
public:
    void femaleprint()
    {
        cout << "i am female" << endl;
    };
};

// boy class
class boy : public student, public male
{
public:
    // function
    void boyprint()
    {
        cout << "i am boy" << endl;
    };
};

// girl class
class girl : public student, public female
{
public:
    void girlprint()
    {
        cout << "i am girl" << endl;
    };
};

int main()
{
    // girl class object
    girl G1;
    G1.girlprint();
    G1.print(); // accessing student property directly,as it is public

    // boy class object
    boy B1;
    B1.boyprint();
    B1.print();
    // B1.girlprint(); // can't access
};