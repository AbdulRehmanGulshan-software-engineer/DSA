// 1446. Consecutive Characters
// Time Complexity = O(n)
// space Complexity = O(1)

class Solution
{
public:
    int maxPower(string s)
    {
        int count = 1;
        int ans = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
                ans = max(ans, count);
            }
            else
                count = 1;
        }
        return ans;
    }
};