// Longest Prefix Suffix

// KMP Algorithm

// Approach 01 : Brute Force (Time Complexity = O(n square))
class Solution
{
public:
    int getLPSLength(string &s)
    {
        // brute force approach
        // outer loop
        int ans = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            int k = i;
            bool check = true;
            for (int j = 0; j <= i; j++)
            {
                if (s[j] != s[(s.size() - 1) - k--])
                    check = false;
            }
            if (check)
                ans = i + 1;
        }
        return ans;
    }
};

// Approach 02 : KMP Algorithm , making LPS array (Time Complexity = O(n))
class Solution
{
public:
    int getLPSLength(string &s)
    {
        // kmp algorithm
        vector<int> lps(s.size(), 0);
        int pre = 0, suf = 1;
        while (suf < s.size())
        {
            if (s[pre] == s[suf])
            {
                lps[suf] = pre + 1;
                pre++;
                suf++;
            }
            else
            {
                if (pre == 0)
                {
                    lps[suf] = 0;
                    suf++;
                }
                else
                    pre = lps[pre - 1];
            }
        }
        return lps[s.size() - 1];
    }
};