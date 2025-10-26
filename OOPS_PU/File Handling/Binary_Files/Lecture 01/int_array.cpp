#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // created object of ofstream class for writing
    ofstream gulshan("hello.bin", ios::binary);
    gulshan.write((char *)arr, sizeof(arr));
    gulshan.close();

    // Reading
    // creating object for reading file
    int brr[5];
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)brr, sizeof(brr));
    abdul.close();

    // output integers
    for (int i = 0; i < 5; i++)
        cout << brr[i] << " ";
    return 0;
}