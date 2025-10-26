#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ifstream class
    ifstream gulshan("numbers.txt");
    int num;
    while (gulshan >> num)
    {
        cout << num << endl;
    }
    gulshan.close();
}