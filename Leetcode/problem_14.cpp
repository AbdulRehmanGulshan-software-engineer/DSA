// 14. Longest Common Prefix
/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/
// Time Complexity = O(n*m)
// auxilary space complexity = O(1)

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // find minimum string length in array of strings
        int size = strs[0].size();
        for (int i = 1; i < strs.size(); i++)
        {
            if (strs[i].size() < size)
                size = strs[i].size();
        }

        // string to return
        string ans = "";

        for (int i = 0; i < size; i++)
        {
            // if(strs[0][i] == strs[1][i] && strs[0][i]==strs[2][i])
            // doing this for any input by below code logic
            bool result = 1;
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (c != strs[j][i])
                    result = 0;
            }
            if (result == 1)
            {
                ans += c;
            }
            else
                return ans;
        }
        return ans;
    }
};