class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        vector<string> result;
        int count = 0;

        for (int i = 0; i < emails.size(); i++)
        {
            string ema = "";
            // for each string
            int j = 0;
            bool check = 0;
            {
                while (j < emails[i].size() && emails[i][j] != '@')
                {
                    if (check == 1) // skip after @
                    {
                        j++;
                        continue;
                    }
                    if (emails[i][j] == '+')
                    {
                        check = 1;
                        continue;
                    }
                    if (emails[i][j] == '.')
                    {
                        j++;
                        continue;
                    }
                    ema += emails[i][j];
                    j++;
                }
                // add @
                ema += emails[i][j++];
                while (j < emails[i].size())
                {
                    ema += emails[i][j];
                    j++;
                }
            }
            result.push_back(ema);
            count++;
            // increasing count if it is uniwue
            for (int i = 0; i < result.size() - 1; i++)
            {
                if (result[result.size() - 1] == result[i])
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};