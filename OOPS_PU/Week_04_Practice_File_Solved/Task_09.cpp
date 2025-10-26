/*
Task 9: From file "nums.txt", read integers and find maximum, minimum and average of
numbers.
*/

#include <iostream>
#include <fstream>
#include <climits>
using namespace std;
int main()
{
    // creating object of ifstream class
    ifstream gulshan("nums.txt");

    int numbers, i = 0, maximum = INT_MIN, minimum = INT_MAX, sum = 0;
    double average;
    while (gulshan >> numbers)
    {
        i++;
        if (numbers < minimum)
            minimum = numbers;
        if (numbers > maximum)
            maximum = numbers;
        sum += numbers;
    }
    cout << "Maximum : " << maximum << endl;
    cout << "Minimum : " << minimum << endl;
    average = (double)sum / i;
    cout << "Average : " << average << endl;
    return 0;
}