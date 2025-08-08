class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int lowest = INT_MAX;
        int highest = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < lowest)
            {
                lowest = prices[i];
            }
            else
            {
                highest = max(highest, prices[i] - lowest);
            }
        }
        return highest;
    }
};