#include <iostream>
using namespace std;

// function prototype
void printArray(int arr[], int size, int index);
int main()
{
    // input array
    int size;
    cout << "enter size of array : ";
    cin >> size;
    int *arr = new int[size];
    cout << "enter array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // called function
    printArray(arr, size, 0);

    //  free memory
    delete[] arr;

    return 0;
}

// defined function
void printArray(int arr[], int size, int index)
{
    // base condition
    if (index == size)
        return;

    // sub solution
    printArray(arr, size, index + 1);
    cout << arr[index] << " ";
}