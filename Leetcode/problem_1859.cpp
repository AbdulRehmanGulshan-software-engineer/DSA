// 1859. Sorting the Sentence

class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> ans(10);
        string temp;
        int count = 0, index = 0;
        while (index < s.size())
        {
            if (s[index] == ' ')
            {
                int position = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[position] = temp;
                temp.clear();
                count++;
            }
            else
                temp += s[index];
            index++;
        }
        int position = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[position] = temp;
        temp.clear();
        count++;
        string result;
        for (int i = 1; i <= count; i++)
        {
            result += ans[i];
                result += ' ';
        }
        result.pop_back();
        return result;
    }
};