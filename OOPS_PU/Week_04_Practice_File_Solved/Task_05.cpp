/*
Task 5: From file "nums.txt", count integers, declare array, reopen file, read integers, sort them,
and print.
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // created object of ifstream class
    ifstream gulshan("nums.txt");

    // count integers
    int number, count = 0;
    while (gulshan >> number)
        count++;

    // close file
    gulshan.close();

    // declare array
    int arr[count];

    // reopen file
    gulshan.open("nums.txt");
    int i = 0;
    while (gulshan >> number)
        arr[i++] = number;

    // sorting by selection sort
    for (int i = 0; i < count - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < count; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
    }

    // closing the file
    gulshan.close();

    // print the sorted array
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}