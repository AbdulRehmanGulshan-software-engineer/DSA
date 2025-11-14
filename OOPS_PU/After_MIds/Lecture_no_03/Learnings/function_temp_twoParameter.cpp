// see youtube lecture 65 @ 👇
// https://youtu.be/lmpyiQVm-Tk?si=TFhEiMi-U3T-nb_N

#include <iostream>
using namespace std;

template <typename abdul, typename rehman>
double add(abdul a, rehman b)
{
    return (a + b);
}

int main()
{
    // adding integer and float
    cout << "Added int and float : " << add<int, float>(3, 7.8) << endl; // note that result will be double datatype

    // adding float and float
    cout << "Added float and float : " << add<float, float>(3.67, 8.98) << endl; // note result will be of double datatype
    return 0;
}