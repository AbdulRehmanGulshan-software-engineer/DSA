#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int arr[40];
    for (int i = 0; i < 40; i++)
        arr[i] = rand() % (300 - 5 + 1) + 5; // rand() % (max - min +1)+min

    for (int i = 0; i < 40; i++)
    {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
    return 0;
}