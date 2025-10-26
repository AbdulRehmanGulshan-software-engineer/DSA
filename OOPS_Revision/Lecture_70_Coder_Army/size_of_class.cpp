// class aik bluprint hai iska koi size nhi hota !!!
// jb object bnate hain to uska size exist krta hai

#include <iostream>
using namespace std;
// creating empty class
class empty
{
};

// creating class
class employee
{
public:
    string empName;
    int empAge, empID;
    string empJob;
};
int main()
{
    // creating object of empty class
    empty emp1;
    cout << sizeof(emp1) << endl; // will still show 1


    // creating object of employee class
    employee e1;
    e1.empName = "Ahmed Tanveer";
    e1.empAge = 20;
    e1.empID = 1123;
    e1.empJob = "AI Product Engineer";
    cout << sizeof(e1) << endl;
}