#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int x[] = {23, 56, 71, 890, 2, 5, 765, 2345, 34, 232, 245, 244, 2, 69};
    // creating object for writing file
    ofstream gulshan("nums.xyz", ios::binary);
    gulshan.write((char *)x, sizeof(x));
    gulshan.close();

    // Reading Files
    ifstream abdul("nums.xyz", ios::binary);
    abdul.seek(sizeof(int) * 4);

    return 0;
}

// abhi seekg,tellg,etc add nhi hai isko baad me dekhte abhi smjh nhi aa rha ye