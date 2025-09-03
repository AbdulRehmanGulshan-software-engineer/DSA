// 3442. Maximum Difference Between Even and Odd Frequency I

class Solution
{
public:
    int maxDifference(string s)
    {
        // created to count frequency of each alphabet
        vector<int> letters(26, 0);
        for (int i = 0; i < s.size(); i++)
            letters[s[i] - 'a']++;

        // creating separate vectors for even and odd
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < 26; i++)
        {
            if (letters[i] == 0) // this condition is edge point in this logic
                continue;
            if (letters[i] % 2 == 0)
                even.push_back(letters[i]);
            else
                odd.push_back(letters[i]);
        }
        int ans = INT_MIN;
        for (int i = 0; i < odd.size(); i++)
        {
            // for each odd subtracting every even
            for (int j = 0; j < even.size(); j++)
            {
                ans = max(odd[i] - even[j], ans);
            }
        }
        return ans;
    }
};