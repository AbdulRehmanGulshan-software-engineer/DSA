#include <iostream>
#include <cmath>
using namespace std;

class complex
{
private:
    float real;
    float imag;

public:
    // input complex number
    void input()
    {
        cout << "Enter Real Part : ";
        cin >> real;
        cout << "Enter imaginary Part : ";
        cin >> imag;
    }
    // Display Complex Number
    void display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << imag << "i" << endl;
    }
    // addition
    complex add(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    // subtraction
    complex subtract(complex c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    // multiplication
    complex multiply(complex c)
    {
        complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }
    // division
    complex divide(complex c)
    {
        complex temp;
        float denom = (c.real * c.real) + (c.imag * c.imag);
        temp.real = ((real * c.real) - (imag * c.imag)) / denom;
        temp.imag = ((real * c.imag) + (imag * c.real)) / denom;
        return temp;
    }
    // conjugate
    complex conjugate()
    {
        cout << conjugate : << real;
        if (imag >= 0)
            cout << " - " << imag << "i" << endl;
        else
            cout << " + " << imag << "i" << endl;
    }
    // magnitude
    float magnitude()
    {
        return sqrt((real * real) + (imag * imag));
    }
};
int main()
{

    return 0;
}