// see youtube lecture 66 @ 👇
// https://youtu.be/fsVYFrJ7xUY?si=8ncDBkNr-VbnJ9DW

#include <iostream>
using namespace std;

template <class gulshan>
class Addition
{
private:
    gulshan a, b;

public:
    Addition(gulshan a, gulshan b)
    {
        this->a = a;
        this->b = b;
    }
    gulshan addNumbers()
    {
        gulshan sum;
        sum = this->a + this->b;
        return sum;
    }
};

int main()
{
    // object for integer datatype
    Addition<int> obj1(24, 65);
    cout << "Int DataType Class : " << obj1.addNumbers() << endl;

    // object for float datatype
    Addition<float> obj2(34.7, 67.4);
    cout << "Float DataType Class : " << obj2.addNumbers() << endl;
    return 0;
}