#include <iostream>
using namespace std;
class employee
{
public:
    // constructor
    employee()
    {
        cout << "I am Employee." << endl;
    }
    // destructor
    ~employee()
    {
        cout << "employee destroyed." << endl;
    }
};

class company
{
public:
    employee *obj;
    company(employee *obj)
    {
        this->obj = obj;
        cout << "this is company." << endl;
    }
    ~company()
    {
        cout << "company destroyed." << endl;
    }
};
int main()
{
    employee *Eobj = new employee;
    { // these brackets forced company to destroy first
        company Cobj(Eobj);
    }
    delete Eobj;        // manually delete
    return 0;
}