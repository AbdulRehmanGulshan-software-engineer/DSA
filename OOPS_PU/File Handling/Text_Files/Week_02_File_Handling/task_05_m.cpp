/*
Task 5: From file "nums.txt", count integers, declare array, reopen file, read integers, sort them,
and print.
Sample Input: 34 12 56 78 90 11 45 ...
Sample Output: 2 4 5 8 10 ... 500
*/

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // create object for reading from file
    ifstream gulshan("nums.txt");

    int num;
    int count = 0;

    // count integers , same hai count words ki tarha
    while (gulshan >> num)
        count++;
    // cout << "Total Integers : " << count << endl;

    // step 02 : declare array
    int arr[count];

    gulshan.close();
    gulshan.open("nums.txt");

    int i = 0;
    while (gulshan >> num)
    {
        arr[i] = num;
        i++;
    }
    gulshan.close();

    // for (int i = 0; i < count; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // sorting algorithm
    for (int i = 0; i < count - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < count; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // printing sorted array
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}