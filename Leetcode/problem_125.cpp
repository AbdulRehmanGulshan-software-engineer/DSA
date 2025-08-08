/*
125. Valid Palindrome
*/
class Solution
{
public:
    // upper_case to lowe_case function
    char upper_to_lower(char c)
    {
        c = c + 32;
        return c;
    }
    bool isPalindrome(string s)
    {
        // make another string and add characters according to condition
        string str;
        // traverse through original string
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                str += upper_to_lower(s[i]);
            else if (s[i] >= 'a' && s[i] <= 'z')
                str += s[i];
            else if (s[i] >= '0' && s[i] <= '9')
                str += s[i];
        }

        // check palindrome using two pointers
        int start = 0, end = str.size() - 1;
        while (start < end)
        {
            if (str[start] == str[end])
            {
                start++;
                end--;
            }
            else
                return false;
        }
        return true;
    }
};