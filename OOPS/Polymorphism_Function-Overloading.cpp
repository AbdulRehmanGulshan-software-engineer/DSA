// Lecture # 75
// Function Overloading : same name of functions but different parameters

#include <iostream>
using namespace std;

class area
{
public:
    // created function
    calculateArea(int radius) // Circle
    {
        return 3.14 * radius * radius;
    }

    calculateArea(int length, int breadth) // Rectangle // same name as previous function
    {
        return length * breadth;
    }
};
int main()
{
    area A1, A2;
    cout << A1.calculateArea(4) << endl;
    cout << A2.calculateArea(3, 4) << endl;
    // cout << A2.calculateArea("Rohit")<<endl;        // will give error
};