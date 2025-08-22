// 28. Find the Index of the First Occurrence in a String
/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

// solved by kmp algorithm O(n+m)
// created LPS finding function
vector<int> lps_find(string s)
{
    // make vector to return
    vector<int> lps(s.size(), 0);

    // take two pointers
    int pre = 0;
    int suf = 1;
    while (suf < s.size())
    {
        if (s[pre] == s[suf])
        {
            lps[suf] = pre + 1;
            pre++; // increase both pointers by 1
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
            {
                pre = lps[pre - 1];
            }
        }
    }
    return lps;
}
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // calling lps function  for needle string
        vector<int> lps = lps_find(needle);

        // make teo pointers
        int first = 0;  // for monitoring haystack string
        int second = 0; // for monitoring needle string
        while (second < needle.size() && first < haystack.size())
        {
            if (haystack[first] == needle[second])
            {
                first++;
                second++;
            }
            else
            {
                if (second == 0)
                {
                    first++; // wapis jaane ka faida nhi just first ko brhao,lps
                             // ki power haha!
                }
                else
                {
                    second = lps[second - 1];
                }
            }
            // checking if we found string
            if (second == needle.size())
                return first - second;

            // otherwise
        }
        return -1;
    }
};