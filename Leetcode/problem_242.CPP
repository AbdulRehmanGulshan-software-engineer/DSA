// 242. Valid Anagram
// solution's time complexity = O(n+m)
// space complexity = O(1)

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // best case
        if (s.size() != t.size())
            return false;
        // making 2 26 size array
        vector<int> sArr(26, 0);
        vector<int> tArr(26, 0);
        // checking lower_case alphabets in string s
        for (int i = 0; i < s.size(); i++)
            sArr[s[i] - 'a']++;
        // checking lower_case alphabets in string t
        for (int i = 0; i < t.size(); i++)
            tArr[t[i] - 'a']++;
        // comPAring both
        if (sArr == tArr)
            return true;
        return false;
    }
};