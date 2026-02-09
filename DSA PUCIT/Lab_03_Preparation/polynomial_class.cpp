#include <iostream>
#include <cmath>
using namespace std;

class Polynomial
{
private:
    int degree;
    int coef[20];

public:
    // Input polynomial
    void input()
    {
        cout << "Enter degree of polynomial: ";
        cin >> degree;

        for (int i = 0; i <= degree; i++)
            coef[i] = 0;

        for (int i = degree; i >= 0; i--)
        {
            cout << "Enter coefficient of x^" << i << ": ";
            cin >> coef[i];
        }
    }

    // Display polynomial
    void display()
    {
        for (int i = degree; i >= 0; i--)
        {
            if (coef[i] != 0)
            {
                cout << coef[i];
                if (i != 0)
                    cout << "x^" << i << " + ";
            }
        }
        cout << endl;
    }

    // Evaluate polynomial
    int evaluate(int x)
    {
        int sum = 0;
        for (int i = 0; i <= degree; i++)
        {
            sum += coef[i] * pow(x, i);
        }
        return sum;
    }

    // Addition
    Polynomial add(Polynomial p)
    {
        Polynomial temp;
        temp.degree = max(degree, p.degree);

        for (int i = 0; i <= temp.degree; i++)
            temp.coef[i] = coef[i] + p.coef[i];

        return temp;
    }

    // Subtraction
    Polynomial subtract(Polynomial p)
    {
        Polynomial temp;
        temp.degree = max(degree, p.degree);

        for (int i = 0; i <= temp.degree; i++)
            temp.coef[i] = coef[i] - p.coef[i];

        return temp;
    }

    // Multiplication
    Polynomial multiply(Polynomial p)
    {
        Polynomial temp;
        temp.degree = degree + p.degree;

        for (int i = 0; i <= temp.degree; i++)
            temp.coef[i] = 0;

        for (int i = 0; i <= degree; i++)
        {
            for (int j = 0; j <= p.degree; j++)
            {
                temp.coef[i + j] += coef[i] * p.coef[j];
            }
        }
        return temp;
    }
};

int main()
{
    Polynomial p1, p2, p3;
    int x;

    cout << "Enter first polynomial:\n";
    p1.input();

    cout << "\nEnter second polynomial:\n";
    p2.input();

    cout << "\nFirst Polynomial: ";
    p1.display();

    cout << "Second Polynomial: ";
    p2.display();

    p3 = p1.add(p2);
    cout << "\nAddition: ";
    p3.display();

    p3 = p1.subtract(p2);
    cout << "Subtraction: ";
    p3.display();

    p3 = p1.multiply(p2);
    cout << "Multiplication: ";
    p3.display();

    cout << "\nEnter value of x for evaluation: ";
    cin >> x;
    cout << "Value of first polynomial = " << p1.evaluate(x) << endl;

    return 0;
}
