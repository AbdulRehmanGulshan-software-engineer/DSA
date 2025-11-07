#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    for (int i = 0; i < sizeof(arr) / 4; i += 2)
        cout << arr[i] << " ";
    return 0;
}