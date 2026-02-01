#include <bits/stdc++.h>
using namespace std;

class A {
    protected:
    A(){ cout<<"A"; } };
class B {
    protected:
    B(){ cout<<"B"; } };

class C : public A, public B {
public: 
    C(){ cout<<"C"; }
};


int main()
{

    C abdul;
    return 0;
}
