#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x[] = {34, 45, 98, 2395, 3, 789, 125, 78, 43};
    // creating object for writing in file
    ofstream gulshan("numbers.xyz", ios::binary);
    gulshan.write((char *)x, sizeof(x));
    gulshan.close();

    // reading from binary file
    // creating object of ifstream class
    ifstream abdul("numbers.xyz", ios::binary);
    abdul.seekg(sizeof(int) * 8); // seekg() = "seek get" → file ke read pointer ko move karta hai. //Matlab file ke start se 32 bytes aage pointer ko move karo
    int temp;
    abdul.read((char *)&temp, sizeof(temp)); // last 4 bytes
    abdul.close();
    cout << "Temp = " << temp << endl;
    return 0;
}