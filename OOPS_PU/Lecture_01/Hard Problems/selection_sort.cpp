#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input array
    // input array
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Selection sort Algorithm 👇
    int i, index;
    for (i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
    }

    // print array
    for (int k = 0; k < n; k++)
        cout << arr[k] << " ";
    return 0;
}