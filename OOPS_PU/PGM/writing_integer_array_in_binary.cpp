#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // creating object of ofstream
    ofstream gulshan("data.bin", ios::binary);
    gulshan.write((char *)arr, sizeof(arr));
    // closing file
    gulshan.close();
}