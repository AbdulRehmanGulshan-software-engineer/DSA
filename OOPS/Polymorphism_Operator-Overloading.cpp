#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    // created default constructor
    complex() {

    };
    // created constructor
    complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    };

    // display function
    void display()
    {
        cout << real << " + i" << imaginary << endl;
    }

    // defining '+' operation
    complex operator+(complex &C)
    {
        complex ans;
        ans.real = real + C.real; // we can access private member within the class
        ans.imaginary = imaginary + C.imaginary;
        return ans;
    }

    // defining - operator
    complex operator-(complex &C)
    {
        complex ans;
        ans.real = real - C.real;
        ans.imaginary = imaginary - C.imaginary;
        return ans;
    }
};

int main()
{
    // created object
    complex c1(3, 4);
    complex c2(4, 6);

    complex c3 = c1 + c2; // here we will use this +operator as function ,c1 calls + function and c2 is argument for this function
    c3.display();

    complex c4 = c1 - c2;
    c4.display();
};

/*
In C++, most operators can be overloaded to define custom behavior for user-defined types. However, there are a few operators that cannot be overloaded:
* Scope resolution operator (::): This operator is used for name resolution and cannot be redefined.
* Member access operator (.): This operator is used to access members of a class or struct and cannot be     overloaded.
* Member access through pointer to member operator (.*): This operator is used to access members through a pointer to a member and cannot be overloaded.
* Ternary conditional operator (?:): This operator provides conditional logic and cannot be redefined.
* sizeof operator: This operator returns the size of a type or variable and its behavior cannot be modified.
* typeid operator: This operator is used for runtime type information and cannot be overloaded.z
*/