#include <iostream>
using namespace std;
// function prototype
bool linearSearch(int arr[], int target, int index, int N);

int main()
{
    // input array
    int size, target;
    cout << "enter size of array : ";
    cin >> size;
    int *arr = new int[size];
    cout << "enter array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "enter target : ";
    cin >> target;

    // called linearSearch function
    cout << linearSearch(arr, target, 0, size);
    return 0;
}

// defined function
bool linearSearch(int arr[], int target, int index, int N)
{
    // base case
    if (index == N)
        return 0;

    // solved single case
    if (arr[index] == target)
        return 1;
    return linearSearch(arr, target, index + 1, N);
}