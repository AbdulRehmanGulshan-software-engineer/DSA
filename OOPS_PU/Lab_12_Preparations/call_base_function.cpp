#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    void f() { cout << "Base f\n"; }
};

class Derived : public Base
{
public:
    void f()
    {
        cout << "Derived f\n";
        Base::f();
    }
};
int main()
{
    Derived d;
    d.f();
    return 0;
}
