// 2300. Successful Pairs of Spells and Potions

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        int m = potions.size();
        // sort potions array
        sort(potions.begin(), potions.end());
        for (int i = 0; i < spells.size(); i++)
        {
            int start = 0, end = potions.size() - 1, result = 0;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                // used ceil(A/B) =z (A+B-1)/B
                if (spells[i] >= (success + potions[mid] - 1) / potions[mid])
                {
                    result = max(result, m - mid);
                    // move left
                    end = mid - 1;
                }
                else
                {
                    // move right
                    start = mid + 1;
                }
            }
            spells[i] = result;
        }
        return spells;
    }
};