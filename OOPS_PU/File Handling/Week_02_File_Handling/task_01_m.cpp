/*
Task 1: From file "words.txt", find the length of the largest word without using extra space.
Input:  apple banana strawberry kiwi grape melon orange pear peach plum
Output: Largest word length = 10
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    const int MAX = 100;
    char word[MAX];

    // created an object for reading file
    ifstream gulshan("words.txt");

    int max_length = 0;

    while (gulshan >> word) // Automatically stops at spaces or newlines.
    {
        int current_length = strlen(word);
        if (current_length > max_length)
            max_length = current_length;
    }
    gulshan.close();

    cout << "Largest word length : " << max_length << endl;
    return 0;
}

// Method 02 : Without Using >>

/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("words.txt");

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int currentLength = 0;
    int maxLength = 0;
    char ch;

    // Read one character at a time
    while (file.get(ch)) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            // End of a word
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 0; // Reset for the next word
        } else {
            currentLength++;
        }
    }

    // Final check for the last word (in case no trailing space)
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    file.close();

    cout << "Largest word length = " << maxLength << endl;
    return 0;
}
*/



// Method 03 : ye applicable hai ku ke har word file me line by line diya hua hai
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("words.txt");

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string word;
    int maxLength = 0;

    // Read each line as one word
    while (getline(file, word)) {
        if ((int)word.length() > maxLength) {
            maxLength = word.length();
        }
    }

    file.close();

    cout << "Largest word length = " << maxLength << endl;
    return 0;
}

*/