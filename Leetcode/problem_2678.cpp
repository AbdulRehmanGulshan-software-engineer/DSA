// 2678. Number of Senior Citizens
// Time Complexity = O(n)
// space Complexity = O(1)

class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        // initialized count to return later
        int count = 0;

        // go through each string index
        for (int i = 0; i < details.size(); i++)
        {
            // converting strings characters(at index 11 and 12) into digit,then number
            int number = 0;
            for (int j = 11; j <= 12; j++)
            {
                int num = details[i][j] - '0';
                number = number * 10 + num;
            }
            // check age
            if (number > 60)
                count++;
        }
        return count;
    }
};