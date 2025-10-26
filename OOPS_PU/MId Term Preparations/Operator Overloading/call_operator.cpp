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
    void whatsyourmark()
    {
        cout << "hey i got " << mark << " marks" << endl;
    }

    // creating call_operator overloading
    marks operator()(int mark)
    {
        this->mark = mark;
        return *this;
    }
};

int main()
{
    // creating objects
    marks m1(100);
    m1.whatsyourmark();
    m1(200);
    m1.whatsyourmark();
    return 0;
}