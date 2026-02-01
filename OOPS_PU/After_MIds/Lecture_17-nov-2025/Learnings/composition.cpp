// composition : also known as strong aggregation

#include <iostream>
using namespace std;

class engine
{
public:
    // constructor
    engine()
    {
        cout << "engine constructor called." << endl;
    }
    // destructor
    ~engine()
    {
        cout << "engine destructor called." << endl;
    }
};

class car
{
public:
    engine obj;
    // constructor
    car()
    {
        cout << "car constructor called." << endl;
    };
    // destructor
    ~car()
    {
        cout << "car destructor called." << endl;
    };
};
int main()
{
    car Cobj;
    return 0;
}