// 49. Group Anagrams
/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
*/
// Runtime Too Much ,memory beats 99% 😂, marked for later too

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // bool string
        vector<bool> check(strs.size(), true);

        // storing sorted vector
        vector<string> sorted(strs.size());
        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            sorted[i] = temp;
        }

        // double vector to return
        vector<vector<string>> result;

        for (int i = 0; i < strs.size(); i++)
        {
            if (check[i] == 0) // means already used
                continue;

            // creating new vector to group them
            vector<string> group;
            group.push_back(strs[i]);
            check[i] = 0;

            int j = i + 1; // for loop can be used here
            while (j < strs.size())
            {
                if (sorted[i] == sorted[j] && check[j])
                {
                    group.push_back(strs[j]);
                    check[j] = 0;
                }
                j++;
            }

            result.push_back(group);
        }
        return result;
    }
};