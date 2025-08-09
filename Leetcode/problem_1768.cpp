// 1768. Merge Strings Alternately

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result; // sring to return
        int n = max(word1.size(), word2.size());
        for (int i = 0; i < n; i++)
        {
            if (i < word1.size()) // check for first string
                result += word1[i];
            if (i < word2.size()) // check for second string
                result += word2[i];
        }
        return result;
    }
};