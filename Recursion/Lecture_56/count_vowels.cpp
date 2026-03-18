// given lowercase alphabets only
#include <iostream>
#include <string>
using namespace std;

// function prototype
int countVowels(string str, int index);

int main()
{
    // input string
    string str;
    cout << "enter string : ";
    cin >> str;

    cout << countVowels(str, str.size() - 1);
    return 0;
}

// defined function
int countVowels(string str, int index)
{
    // base condition
    if (index == -1)
        return 0;

    // solved one minor problem
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
        return 1 + countVowels(str, index - 1);
    else
        return countVowels(str, index - 1);
}