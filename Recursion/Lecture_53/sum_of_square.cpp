#include <iostream>
using namespace std;

// defined function
int sum_of_square(int num)
{
    // base case
    if (num == 1)
        return 1;
    return num * num + sum_of_square(num - 1);
}

int main()
{
    int num;
    cout << "enter number : ";
    cin >> num;
    cout << sum_of_square(num) << endl;
    return 0;
}

//always come from largest to smaller or constant number,then we will no need base case