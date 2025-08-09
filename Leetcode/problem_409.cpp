// 409. Longest Palindrome

class Solution
{
public:
    int longestPalindrome(string s)
    {
        vector<int> lower_case(26, 0);
        vector<int> upper_case(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z') // for uppercase
                upper_case[s[i] - 'A']++;
            else // for lowercase
                lower_case[s[i] - 'a']++;
        }
        int count = 0, ans = 0;
        bool check = 1;
        for (int i = 0; i < 26; i++)
        {
            count += upper_case[i] / 2;
            count += lower_case[i] / 2;
            if ((upper_case[i] % 2 == 1 || lower_case[i] % 2 == 1) && check)
                check = 0;
        }
        ans = count * 2;
        if (check == 0)
        {
            ans += 1;
            return ans;
        }
        return ans;
    }
};