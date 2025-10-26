/*
Task 4: Input a three-digit number and print its digits with * in between:
Sample Input: 529
Sample Output: 5*2*9
*/

#include <iostream>
using namespace std;
int main()
{
    // input number
    int number;
    cout << "enter a three digit number : ";
    cin >> number;

    // separate numbers in normal way i.e. 529 -> 5 2 9
    // initialize a string
    int arr[3], count = 0;
    while (number)
    {
        int rem = number % 10;
        arr[count++] = rem;
        number /= 10;
    }

    // use this array reversely
    for (int i = 2; i >= 0; i--)
    {
        cout << arr[i];
        if (i > 0)
            cout << "*";
    }

    // neeche wala method nhi shi bhaii 👇 wo 529 ko 9 2 5 nikaal rha hai
    // // separate each digit of given number
    // int rem;
    // while (number)
    // {
    //     if (number < 10)
    //         rem = number % 10;
    //     else
    //         rem = number / 10;
    //     cout << rem;
    //     number = number / 10;
    //     if (number)
    //         cout << "*";
    // }
    return 0;
}