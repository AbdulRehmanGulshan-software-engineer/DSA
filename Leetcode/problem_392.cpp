// 392. Is Subsequence

// Approach 01 : Time Complexity = O(n*m)
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int first = 0;  // pointing t (ahbgdc)
        int second = 0; // pointing s (abc)
        bool check = 0;
        while (second < s.size() && first < t.size())
        {
            check = 0;
            for (int i = first; i < t.size(); i++)
            {
                if (t[i] == s[second])
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
        if (second == s.size())
            return true;
        return false;
    }
};



// Approach 02 : Time Complexity = O(n+m)
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int first = 0;  // pointing t (ahbgdc)
        int second = 0; // pointing s (abc)

        while (second < s.size() && first < t.size())
        {
            if (s[second] == t[first])
            {
                second++;
                first++;
            }
            else
                first++;
        }
        if (second == s.size())
            return true;
        return false;
    }
};
