// 3110. Score of a String
/*
You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.
*/

class Solution
{
public:
    int scoreOfString(string s)
    {
        int output = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            output += abs(s[i] - s[i + 1]);
        }
        return output;
    }
};