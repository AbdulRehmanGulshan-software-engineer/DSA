// class member access operator
#include <iostream>
using namespace std;

class marks
{
    int mark;

public:
    // constructor
    marks(int mark)
    {
        this->mark = mark;
    }
    // display function
    void whatyourmarks()
    {
        cout << "marks = " << mark << endl;
    }

    // arrow-operator
    marks *operator->()
    {
        return this;
    }
};

int main()
{
    marks anus(65);
    anus.whatyourmarks();
    anus->whatyourmarks();
    return 0;
}