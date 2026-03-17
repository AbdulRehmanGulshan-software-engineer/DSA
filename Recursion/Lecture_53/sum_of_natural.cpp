#include <iostream>
using namespace std;

int sumNatural(int n)
{
    // base case
    if (n == 1)
        return 1;

    return n + sumNatural(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << sumNatural(n) << endl;
    return 0;
}