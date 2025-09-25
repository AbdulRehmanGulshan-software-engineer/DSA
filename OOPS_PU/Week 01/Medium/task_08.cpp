/*
Task 8: Merge two unsorted arrays and then sort them using insertion sort.
Sample Input: A=[5,1], B=[4,2]
Sample Output: Merged & Sorted=[1,2,4,5]
*/
#include <iostream>
using namespace std;
int main()
{
    // input first array
    int size1;
    cout << "Array 01 size : ";
    cin >> size1;
    int arr[size1];
    cout << "enter first array : ";
    for (int i = 0; i < size1; i++)
        cin >> arr[i];

    // input second array
    int size2;
    cout << "Array 02 size : ";
    cin >> size2;
    int brr[size2];
    cout << "enter second array : ";
    for (int i = 0; i < size2; i++)
        cin >> brr[i];

    // merging both
    int crr[size1 + size2];
    int m;
    for (m = 0; m < size1; m++)
        crr[m] = arr[m];
    for (int i = 0; i < size2; i++)
        crr[m++] = brr[i];

    // apply insertion sort algorithm
    for (int i = 1; i < size1 + size2; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (crr[j] < crr[j - 1])
                swap(crr[j], crr[j - 1]);
            else
                break;
        }
    }

    // print output
    cout << "Merge and Sorted = ";
    for (int i = 0; i < size1 + size2; i++)
        cout
            << crr[i] << " ";
    return 0;
}