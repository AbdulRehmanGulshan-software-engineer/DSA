#include <iostream>
using namespace std;

// main function
int main()
{
    // initializing character array
    char arr[] = {'a', 'p', 'p', 'l', 'e'};
    // print
    for (int i = 0; i < 5; i++) //(i < 5) because size of word apple is 5
        cout << arr[i];
    cout << endl;

    // assumed maximum length
    char brr[10];
    cin >> brr;
    brr[2] = '\0';
    cout << brr;
    return 0;
};