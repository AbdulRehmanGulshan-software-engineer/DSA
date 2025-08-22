// Min Chars to Add for Palindrome
/*
Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.
*/

// time complexity = o(n)
// auxilary space complexity = o(n)
// algorithm used: kmp algorithm,LPS

class Solution
{
public:
    int minChar(string &s)
    {
        int n = s.size();
        // step 01 : storing reverse of given string
        string rev = "";
        for (int i = 0; i < s.size(); i++)
        {
            rev += s[s.size() - 1 - i];
        }

        // step 02 : adding any symbol for seperation
        s += '$';

        // step 03 : adding rev in s
        s += rev;

        // finding lps of this string
        // creating vector for lps
        vector<int> lps(s.size(), 0);
        // initializing pointers
        int pre = 0;
        int suf = 1;
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
                    lps[suf] == 0;
                    suf++;
                }
                else
                {
                    pre = lps[pre - 1];
                }
            }
        }
        int lps_val = lps[s.size() - 1];
        return n - lps_val;
    }
};
