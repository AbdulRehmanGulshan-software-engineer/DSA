#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // input character
    char ch;
    cout << "enter character : ";
    cin >> ch;

    // creating object for writing file
    ofstream gulshan("hello.bin", ios::binary);
    gulshan.write(&ch, sizeof(ch)); // mene yhan par (char*) use nhi kiya aor ye abhi ke liye masla bhi nhi kre ga bhaii
    gulshan.close();

    
    // reading character
    char b;
    // creating object of ifstream class
    ifstream abdul("hello.bin", ios::binary);
    abdul.read((char *)&b, sizeof(b));
    abdul.close();

    cout << "Read char = " << b << endl;
    return 0;
}