/*
345. Reverse Vowels of a String
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
*/
class Solution
{
public:
    int vowelOrConsonant(char x)
    {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
            return 1;
        else
            return 0;
    }
    string reverseVowels(string s)
    {
        // two pointers approach
        int start = 0, end = s.size() - 1;
        while (start < end)
        {
            if (vowelOrConsonant(s[start]) && vowelOrConsonant(s[end]))
                swap(s[start++], s[end--]);
            else if (vowelOrConsonant(s[start]))
                end--;
            else if (vowelOrConsonant(s[end]))
                start++;
            else
            {
                start++;
                end--;
            }
        }
        return s;
    }
};