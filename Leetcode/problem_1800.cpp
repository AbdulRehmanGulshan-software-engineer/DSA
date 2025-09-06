// 1800. Maximum Ascending Subarray Sum
// Brute Force approach (complexities not good!!!!!!)

// function to check strictly increasing
bool strictlyIncreasing(vector<int> array)
{
    for (int i = 1; i < array.size(); i++)
    {
        if (array[i] <= array[i - 1])
            return 0;
    }
    return 1;
}

// sum function
int totalSum(vector<int> array)
{
    int ans = 0;
    for (int i = 0; i < array.size(); i++)
    {
        ans += array[i];
    }
    return ans;
}

class Solution
{
public:
    int maxAscendingSum(vector<int> &nums)
    {
        auto max_ele = max_element(nums.begin(), nums.end());
        int ans = *max_ele;
        // subarray
        for (int i = nums.size(); i >= 2; i--)
        {
            for (int j = 0; j < nums.size() + 1 - i; j++)
            {
                vector<int> result;
                for (int k = j; k < j + i; k++)
                {
                    result.push_back(nums[k]);
                }
                if (strictlyIncreasing(result))
                {
                    ans = max(ans, totalSum(result));
                }
            }
        }
        return ans;
    }
};