// 58. Length of Last Word
// Time Complexity = O(n)+O(n) = O(n)
// Auxilary Space Complexity = O(1)

/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
*/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        // ignoring last spaces
        int i = s.size() - 1;
        while (s[i] == ' ')
            i--;

        // counting length of last word
        int count = 0;
        for (int j = i; j >= 0; j--)
        {
            if (s[j] != ' ')
                count++;
            else
                break;
        }
        return count;
    }
};