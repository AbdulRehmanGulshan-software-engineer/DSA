#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    // creating default constructor
    complex() {
    };
    // creating constructor
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    };
    // creating for showing
    void show()
    {
        cout << real << " + " << img << endl;
    }
    // creating operation overloading function
    complex operator+(complex &c)
    {
        complex ans;
        ans.real = real + c.real;
        ans.img = real + c.img;
        return ans;
    }
};
int main()
{
    // creating objects
    complex c1(3, 4);
    complex c2(4, 6);

    complex c3 = c1 + c2;
    c3.show();
}