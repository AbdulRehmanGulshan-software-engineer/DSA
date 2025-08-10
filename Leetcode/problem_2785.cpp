// 2785. Sort Vowels in a String

// solution 01
class Solution
{
public:
    string sortVowels(string s)
    {
        // size of string
        int n = s.size();
        // vector to store index;
        vector<int> ind;
        // vector to store vowels
        string vow;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U')
            {
                ind.push_back(i);
                vow.push_back(s[i]);
                count++;
            }
        }
        // sort the vowel array
        sort(vow.begin(), vow.end());
        // modify original string
        for (int i = 0; i < count; i++)
        {
            s[ind[i]] = vow[i];
        }
        return s;
    }
};



// solution 02
class Solution
{
public:
    string sortVowels(string s)
    {

        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        for (int i = 0; i < s.size(); i++)
        {
            // lower case a,e,i,o,u
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u')
            {
                lower[s[i] - 'a']++;
                s[i] = '#';
                // for our ease
            }
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                     s[i] == 'U')
            {
                upper[s[i] - 'A']++;
                s[i] = '#';
                // for our ease
            }
        }
        string ans;
        for (int i = 0; i < 26; i++)
        {
            char c = 'A' + i;
            while (upper[i])
            {
                ans += c;
                upper[i]--;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            char c = 'a' + i;
            while (lower[i])
            {
                ans += c;
                lower[i]--;
            }
        }

        int first = 0, second = 0;
        while (second < ans.size())
        {
            if (s[first] == '#')
            {
                s[first] = ans[second];
                second++;
            }
            first++;
        }
        return s;
    }
};