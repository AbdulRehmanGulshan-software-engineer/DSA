#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // input array 👇
    int size;
    cout << "enter size of array : ";
    cin >> size;
    int arr[size];
    cout << "enter array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    // write array 👇
    // created object for writing
    ofstream gulshan("hello.bin", ios::binary);
    gulshan.write((char *)&arr, sizeof(arr));
    gulshan.close();

    // read array 👇
    int brr[size];
    // created object for reading
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)&brr, sizeof(brr));
    abdul.close();

    cout << "Read Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }
    return 0;
}