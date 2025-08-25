// 2486. Append Characters to String to Make Subsequence
/*
You are given two strings s and t consisting of only lowercase English letters.

Return the minimum number of characters that need to be appended to the end of s so that t becomes a subsequence of s.
*/

// Approach 01 : Time Complexity = O(n*m)
class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int first = 0;  // pointing s
        int second = 0; // pointing t
        bool check = 0;
        while (second < t.size() && first < s.size())
        {
            check = 0;
            for (int i = first; i < s.size(); i++)
            {
                if (s[i] == t[second])
                {
                    first = i + 1;
                    second++;
                    check = 1;
                    break;
                }
            }
            if (check == 0)
                break;
        }
        return t.size() - second;
    }
};

// Approach 02 : Time Complexity = O(n+m)
class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int first = 0;  // pointing s
        int second = 0; // pointing t
        while (second < t.size() && first < s.size())
        {
            if (s[first] == t[second])
            {
                first++;
                second++;
            }
            else
                first++;
        }
        return t.size() - second;
    }
};