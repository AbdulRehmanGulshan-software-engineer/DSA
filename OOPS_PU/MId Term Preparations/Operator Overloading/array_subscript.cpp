// in this code we will make [],(), and -> operator overloading
#include <iostream>
using namespace std;

// creating class
class marks
{
    int subjects[3];

public:
    // constructor
    marks(int sub1, int sub2, int sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }
    // creating [] operator
    int operator[](int position)
    {
        return subjects[position];
    }
};

int main()
{
    marks m1(22, 44, 33);
    cout << m1[0] << endl;
    cout << m1[1] << endl;
    cout << m1[2] << endl;
    return 0;
}