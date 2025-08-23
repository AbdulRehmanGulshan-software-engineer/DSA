// 686. Repeated String Match
// solved by kmp,lps algo
// time complexity = o(n+m)
// note : can be done in brute force o(n*m)

/*
Given two strings a and b, return the minimum number of times you should repeat string a so that string b is a substring of it. If it is impossible for b​​​​​​ to be a substring of a after repeating it, return -1.

Notice: string "abc" repeated 0 times is "", repeated 1 time is "abc" and repeated 2 times is "abcabc".
*/

// LPS finding function
vector<int> lps_find(string s)
{
    vector<int> lps(s.size(), 0); // maked string to return
    int pre = 0, suf = 1;         // make two pointers
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
                suf++; // lps[suf] is already zero
            }
            else
                pre = lps[pre - 1];
        }
    }
    return lps;
}

// KMP_pattern search algorithm
int KMP_match(string temp, string to_find)
{
    vector<int> lps = lps_find(to_find); // calling lps_find function
    int first = 0, second = 0;           // make two pointers
    while (first < temp.size() && second < to_find.size())
    {
        if (temp[first] == to_find[second])
        {
            first++;
            second++;
        }
        else
        {
            if (second == 0)
                first++;
            else
                second = lps[second - 1];
        }
    }

    if (second == to_find.size()) // checking if we found string
        return 1;
    return 0;
}

class Solution
{
public:
    int repeatedStringMatch(string a, string b)
    {
        if (a == b)   // if already equal
            return 1; // one repetition
        // repeat string a until <=b
        int repeat = 1;
        string temp = a;
        while (temp.size() < b.size())
        {
            temp += a;
            repeat++;
        }
        // check if string match using KMP_Pattern Search Function
        if (KMP_match(temp, b) == 1)
            return repeat;
        // if not repeat one last time,check again
        if (KMP_match(temp + a, b) == 1)
            return repeat + 1;
        // else return -1
        return -1;
    }
};