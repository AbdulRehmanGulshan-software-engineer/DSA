/*
a. Write a program to input marks of a student in 3 subjects and display the grade using nested if-else.
Input: Marks: 85 70 90
Output: Average = 81.6 → Grade: A
*/

#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    // input three subjects marks
    int marks[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "enter subject " << i + 1 << " marks : ";
        cin >> marks[i];
        total += marks[i];
    }

    // find and print average
    float average = total / 3.0;
    cout << "Average : " << average;

    // Grade selection
    if (average >= 90)
        cout << " -> Grade : " << "A+";
    else if (average >= 80)
        cout << " -> Grade : " << "A";
    else if (average >= 70)
        cout << " -> Grade : " << "B";
    else if (average >= 60)
        cout << " -> Grade : " << "C";
    else if (average >= 50)
        cout << " -> Grade : " << "D";
    else
        cout << " -> Grade : " << "F";

    return 0;
}