#include <iostream>
using namespace std;
// print function
void print(int num, int N)
{
    // Base case
    if (num == N)
    {
        cout << num << endl;
        return;
    }
    cout << num << endl;
    print(num + 1, N);
}
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    print(1, num);
    return 0;
}