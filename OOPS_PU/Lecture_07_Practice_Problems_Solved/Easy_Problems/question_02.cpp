/*
 Create a binary file storing 3 integers using write(). Read and
print them back
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // creating int array for three integers
    int arr[3] = {3, 5, 7};

    // Writing Files
    //  creating object of ofstream class
    ofstream gulshan("hello.bin", ios::binary);
    gulshan.write((char *)arr, sizeof(arr));
    gulshan.close();

    // Reading Files
    int brr[3];
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)brr, sizeof(brr));
    abdul.close();

    // printing integers
    cout << "Written Integers Are : ";
    for (int i = 0; i < 3; i++)
        cout << brr[i] << " ";
    return 0;
}