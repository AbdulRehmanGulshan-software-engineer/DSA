/*
Task 2: From file "words.txt", count how many words have even length.
Output: 4
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    // creating object for reading from file
    ifstream gulshan("words.txt");

    int count = 0;

    const int MAX = 100;
    char word[MAX];
    while (gulshan >> word)
    {
        int length = strlen(word);
        if (length % 2 == 0)
            count++;
    }
    cout << "Output : " << count << endl;
    return 0;
}


// Method 02
/*
#include <iostream>
#include <fstream>
#include <string>  // Needed for std::string
using namespace std;

int main() {
    ifstream gulshan("words.txt");

    int count = 0;
    string word;

    while (gulshan >> word) {
        int length = word.length(); // or word.size()
        if (length % 2 == 0)
            count++;
    }

    cout << "Output : " << count << endl;
    return 0;
}

*/