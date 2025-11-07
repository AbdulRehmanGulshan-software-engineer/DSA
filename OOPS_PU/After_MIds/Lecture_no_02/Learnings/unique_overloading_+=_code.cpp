#include <iostream>
using namespace std;

class A
{
    int x;
public:
    A(int x) : x(x) {}
    int get() const { return x;}
    void set(int x){this->x = x;}
};
class B
{
    int y;
public:
    B(int y) : y(y) {}
    int get() const {return y;}
    void set(int y) {this->y = y;}
};
// operator += overloading
A& operator+=(A& gulshan,const B& zoha){    //Update A
    gulshan.set(gulshan.get()+zoha.get());
    return gulshan; // Return updated A
}

int main()
{
    A objA(3); B objB(8);
    objA += objB;
    cout << objA.get() << endl;
    return 0;
}