#include <iostream>
using namespace std;
// power of 2
int power(int num, int N)
{
    // base case
    if (N == 1) // no need of this
        return num;
    if (N == 0)
        return 1;

    return num * power(num, N - 1);
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    int n;
    cout << "Enter Power To Calculate : ";
    cin >> n;
    cout << power(num, n) << endl;
}