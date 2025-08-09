// 2108. Find First Palindromic String in the Array

class Solution {
public:
    bool is_palindrome(string s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (is_palindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};