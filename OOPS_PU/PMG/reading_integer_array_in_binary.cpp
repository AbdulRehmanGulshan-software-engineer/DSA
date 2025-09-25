#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr[5];
    // creating object of ifstream class
    ifstream gulshan("data.bin", ios::binary);
    gulshan.read((char *)arr, sizeof(arr));
    // close the file
    gulshan.close();

    // printing array on console
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}