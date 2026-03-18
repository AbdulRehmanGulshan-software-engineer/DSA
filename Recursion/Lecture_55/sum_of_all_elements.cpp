// // my initial try 👇
// #include <iostream>
// using namespace std;

// // function prototype
// int sumOfElements(int arr[], int size);

// int main()
// {
//     // input array
//     int size;
//     cout << "enter size of array : ";
//     cin >> size;
//     int *arr = new int[size];
//     cout << "enter array : ";
//     for (int i = 0; i < size; i++)
//         cin >> arr[i];

//     // called function
//     cout << sumOfElements(arr, size - 1);

//     // released memory
//     delete[] arr;

//     return 0;
// }

// // defined function
// int sum = 0;
// int sumOfElements(int arr[], int lastIndex)
// {
//     // base case
//     if (lastIndex == -1)
//         return sum;

//     sum += arr[lastIndex];
//     sumOfElements(arr, lastIndex - 1);
// }

// Instructor's Solution 👇
#include <iostream>
using namespace std;

int sumOfElements(int arr[], int index, int n)
{
    // base case
    if (index == n)
        return 0;

    // solved for one case
    return arr[index] + sumOfElements(arr, index + 1, n);
}
int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    cout << sumOfElements(arr, 0, 5);
    return 0;
}