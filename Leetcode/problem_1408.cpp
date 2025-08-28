// 1408. String Matching in an Array
/*
Given an array of string words, return all strings in words that are a substring of another word. You can return the answer in any order.
*/

// see Lecture 43 notes for full understanding of this code and algorithm
// imark this question because its runtime is 3ms,need to be more optimized
// created lps finding function ⬇️
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
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }
    return lps;
}

class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {

        // vector to return;
        vector<string> result;

        // full iteration loop
        for (int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            vector<int> lps(s.size(), 0); // for storing lps
            lps = lps_find(s);            // calling lps function

            for (int j = 0; j < words.size(); j++) // this is also full iterating loop but see if condition below
            {
                {
                    if (i != j && s.size() < words[j].size())
                    {
                        // kmp matching algorithm ⬇️
                        // created two pointers
                        int first = 0, second = 0;
                        while (first < words[j].size() && second < s.size())
                        {
                            if (s[second] == words[j][first])
                            {
                                second++;
                                first++;
                            }
                            else
                            {
                                if (second == 0)
                                    first++;
                                else
                                    second = lps[second - 1];
                            }
                        }
                        if (second == s.size())
                        {
                            result.push_back(s);
                            break; // we just want it one time see this test case ["leetcoder","leetcode","od","hamlet","am"]
                        }
                    }
                }
            }
        }
        return result;
    }
};