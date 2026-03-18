#include <iostream>
using namespace std;

int minElement(int arr[], int index, int n)
{
    // base case
    if (index == n - 1)
        return arr[index];

    // return arr[index];
    return min(arr[index], minElement(arr, index + 1, n));
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    // int num = arr[0];
    // for (int i = 1; i < 5; i++)
    //     num = min(num, minElement(arr, i));
    // cout << num;

    cout << minElement(arr, 0, 5);

    return 0;
}