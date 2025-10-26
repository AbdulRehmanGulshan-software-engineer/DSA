#include <iostream>
#include <fstream>
using namespace std;
// creating class
class student
{
    int roll;
    char name[30];

public:
    void read()
    {
        cout << "Enter Roll No : ";
        cin >> roll;
        cout << "Enter Name : ";
        gets(name);
    }
    void display()
    {
        cout << "Roll No Is : " << roll;
        cout << "Name Is : " << name;
    }
};

int main()
{
    // creating object of student class
    student co;
    // creating object of ofstream class (for writing in file)
    ofstream gulshan("hello.dat", ios::binary | ios::out); // ios::out is by default present
    co.read();
    gulshan.write((char *)&co, sizeof(co));
    // reading new data
    co.read();
    gulshan.write((char *)&co, sizeof(co));
    gulshan.close();
    return 0;
}
