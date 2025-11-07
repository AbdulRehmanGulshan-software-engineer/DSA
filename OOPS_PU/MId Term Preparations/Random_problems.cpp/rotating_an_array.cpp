#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, rotated[5];
    int k = 2; // rotate by 2 positions
    for (int i = 0; i < 5; i++)
        rotated[(i + k) % 5] = arr[i];

    // printing sorted array
    for (int i = 0; i < 5; i++)
        cout << rotated[i] << " ";
    return 0;
}