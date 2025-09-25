#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> arr(5);
    cout << "Enter The Input : ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    // file ko open karo
    ofstream gulshan;
    gulshan.open("gulshan.txt");

    gulshan << "Original Data\n";
    for (int i = 0; i < 5; i++)
        gulshan << arr[i] << " ";
    gulshan << "\n Sorted Data: \n";

    // sort the data
    sort(arr.begin(), arr.end());

    for (int i = 0; i < 5; i++)
        gulshan << arr[i] << " ";
    // close the file
    gulshan.close();
}