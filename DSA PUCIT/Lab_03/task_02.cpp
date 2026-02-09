#include <iostream>
#include <cmath>
using namespace std;

class complexNumber
{
private:
    double real, imag;

public:
    // functions
    complexNumber(double r = 0, double i = 0)
    {
        this->real = r;
        this->imag = i;
    }
    void set(double r, double i)
    {
        this->real = r;
        this->imag = i;
    }
    void display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << imag << "i" << endl;
    }
    complexNumber *add(complexNumber &other)
    {
        complexNumber temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }
    complexNumber *sub(complexNumber &other)
    {
        complexNumber temp;
        temp.real = real - other.real;
        temp.imag = imag - other.imag;
        return temp;
    }
    complexNumber *mul(complexNumber &other)
    {
        complexNumber temp;
        temp.real = (real * other.real) - (imag * other.imag);
        temp.imag = (real * other.imag) + (imag * other.real);
        return temp;
    }
    complexNumber *divide(complexNumber &other)
    {
        complexNumber temp;
        double denom = (other.real * other.real) + (other.imag * other.imag);
        temp.real = ((real * other.real) + (imag * other.imag)) / denom;
        temp.imag = ((imag * other.real) - (real * other.imag)) / denom;
        return temp;
    }
    complexNumber *conjugate()
    {
        complexNumber temp;
        temp.real = real;
        temp.imag = imag * -1;
        return temp;
    }
    double magnitude()
    {
        return sqrt(pow(real, 2) + pow(imag, 2));
    }

    static complexNumber **sortByMagnitude(complexNumber *&arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int index = i;
            min = magnitude(arr[i]);
            for (int j = i + 1; j < n; j++)
            {
                if (magnitude(arr[j] < min))
                    index = j;
            }
            if (index != i)
                swap(arr[i], arr[index]);
        }
    }
    return this;
};
int main()
{
    int size;
    double real, imag;
    cout << "Enter Size : ";
    cin >> size;
    complexNumber *hello = new complexNumber[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter First Complex : ";
        cin >> real >> imag;
        hello[i].set(real, imag);
    }
    return 0;
}