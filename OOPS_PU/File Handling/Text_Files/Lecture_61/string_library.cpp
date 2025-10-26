#include <iostream>
#include <fstream> // for file handling
#include <string>  // for string handling
using namespace std;
int main()
{
    // create object of ofstream
    // ofstream gulshan("fdata.txt", ios::app); // open file in append mode (method 01)
    // method 02 👇
    ofstream gulshan;
    gulshan.open("fdata.txt",ios::app); //opening through member function

    string userInput;
    cout << "Enter text to write to the file (type 'exit' to stop)";
    while (true)
    {
        getline(cin, userInput); // take full line input
        if (userInput == "exit")
            break;                    // stop input on entering text
        gulshan << userInput << "\n"; // Write to file
    }
    gulshan.close(); // close the file
    cout << "Data Written to file successfully.\n";
    return 0;
}