// see youtube lecture 65 @ 👇
// https://youtu.be/lmpyiQVm-Tk?si=TFhEiMi-U3T-nb_N

#include <iostream>
using namespace std;
template <typename gulshan>
gulshan add(gulshan a, gulshan b)
{
    return (a + b);
}
int main()
{
    // adding integers
    cout << "Added Integers : " << add<int>(4, 5) << endl;
    // add float
    cout << "Added Floats : " << add<float>(3.5, 4.7) << endl;
    // add double
    cout << "Added Doubles : " << add<double>(42476632, 552873) << endl;
}