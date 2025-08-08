/*
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
*/
class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        // make array for alphabets check
        vector<bool> alphabet(26, 0);
        // make all available alphabets index places 1
        for (int i = 0; i < sentence.size(); i++)
            alphabet[sentence[i] - 'a'] = 1;
        for (int i = 0; i < 26; i++)
        {
            if (alphabet[i] == 0)
                return 0;
        }
        return 1;
    }
};