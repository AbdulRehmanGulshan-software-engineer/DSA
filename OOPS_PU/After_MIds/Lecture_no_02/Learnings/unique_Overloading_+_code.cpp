#include <iostream>
using namespace std;

// Normal Case :  OperatorOverloading Inside Class
// Yahan humne operator+ class ke andar likha — to iska matlab ye hua ke pehla operand (LHS) hamesha usi class ka object hoga.
class complex
{
    int real, imag;

public:
    // constructor
    complex(int r, int i) : real(r), imag(i) {}
    // operator overloading
    complex operator+(const complex &gulshan)
    {
        return complex(real + gulshan.real, imag + gulshan.imag);
    }
    // display function
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

class A // creating class
{
    int x;

public:
    // constructor
    A(int x) : x(x) {}
    // getter
    int getx() const // why this const ???? Ans : Ye function object ke data members me koi change nahi karega.
    {
        return x;
    }
};

class B // creating another class
{
    int y;

public:
    // constructor
    B(int y) : y(y) {}
    // getter
    int gety() const
    {
        return y;
    }
};

// operator overloading outside class
void operator+(const A &a, const B &b) // ye uper wala 👆 sirf objA + objB ke liye kaam kre ga
{
    cout << a.getx() + b.gety() << endl;
}

void operator+(const B &rafay, const A &zoha) // ab ye uper wala 👆 objB + objA ke liye bhi kaam kre ga
{
    cout << rafay.gety() + zoha.getx() << endl;
}

int main()
{
    // creating objects
    complex panda(2, 4);
    complex saadi(4, 6);
    complex panda_saadi_son = panda + saadi;
    panda_saadi_son.display();

        A objA(3);
    B objB(7);
    // objA + objB;
    objB + objA;
}