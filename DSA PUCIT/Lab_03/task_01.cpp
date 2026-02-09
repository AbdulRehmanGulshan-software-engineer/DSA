#include <iostream>
#include <cmath>
using namespace std;

class Polynomial
{
private:
    int *coef;
    int degree;

public:
    // function
    Polynomial(int deg)
    {
        degree = deg;
        coef = new int[deg + 1];
        for (int i = 0; i <= deg; i++)
            coef[i] = 0;
    }
    void setCoefficient(int power, int value)
    {
        coef[power] = value;
    }
    void display()
    {
        for (int i = degree; i >= 0; i--)
        {
            cout << coef[i] << "x^" << i;
            if (i != 0)
                cout << " + ";
        }
    }
    Polynomial *add(Polynomial &other)
    {
        Polynomial temp;
        temp.degree = max(degree, other.degree);
        temp.coef = new int[degree + 1];
        for (int i = degree; i >= 0; i++)
        {
            temp.coef[i] = coef[i] + other.coef[i];
        }
        return temp;
    }
    Polynomial *sub(Polynomial &other)
    {
        Polynomial temp;
        temp.degree = max(degree, other.degree);
        temp.coef = new int[degree + 1];
        for (int i = degree; i >= 0; i++)
        {
            temp.coef[i] = coef[i] - other.coef[i];
        }
        return temp;
    }
    Polynomial *mul(Polynomial &other)
    {
        Polynomial temp;
        temp.degree = degree * other.degree;
        for (int i = 0; i <= degree; i++)
        {
            for (int i = 0; i <= other.degree; i++)
            {
                temp.coef[i] = coef[i] * other.coef[i];
            }
        }
        return temp;
    }
    Polynomial *derivative()
    {
        Polynomial temp;
        temp.degree = degree - 1;
        temp.coef = new int[degree];
        for (int i = degree; i > 0; i--)
        {
            temp.coef[i - 1] = coef[i] * i;
        }
        return temp;
    }
    int evaluate(int x)
    {
        int sum = 0;
        for (int i = degree; i >= 0; i--)
        {
            sum += coef[i] * pow(x, i);
        }
        return sum;
    }
    bool zero()
    {
        for (int i = degree; i >= 0; i--)
        {
            if (coef[i] != 0)
                return false;
        }
        return true;
    }
    int highDegree()
    {
        // maybe other logic will implement here
        return degree;
    }
};
int main()
{
    Polynomial *p1 = new Polynomial(2);
    Polynomial *p2 = new Polynomial(2);
    p1->setCoefficient(2, 1);
    p1->setCoefficient(1, 2);
    p1->setCoefficient(0, 3);
    // p1->display();
    p2->setCoefficient(2, 2);
    p2->setCoefficient(1, 1);
    p2->setCoefficient(0, 1);
    cout << "Polynomial 1: ";
    p1->display();
    cout << "Polynomial 2: ";
    p2->display();

    Polynomial *sum = p1->add(*p2);
    Polynomial *diff = p1->sub(*p2);
    Polynomial *prod = p1->mul(*p2);
    Polynomial *diff = p1(*p2);
    

    return 0;
}