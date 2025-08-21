// 18. 4Sum
/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
*/

// comparing function
bool compare(vector<vector<int>> &matrix, vector<int> &row)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (row == matrix[i])
            return false;
    }
    return true;
}

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        // 2d vector array to return
        vector<vector<int>> result;

        if (nums.size() < 4)
            return result;

        vector<int> newRow; // created newRow vector for comparison

        // sort the array
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 3; i++)
        {
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                long long search = (1L * target - nums[i] - nums[j]);

                // two pointer approach
                int start = j + 1, end = nums.size() - 1;
                while (start < end)
                {
                    if (nums[start] + nums[end] == search)
                    {
                        newRow = {nums[i], nums[j], nums[start], nums[end]};
                        if (compare(result, newRow))
                        {
                            result.push_back({nums[i], nums[j], nums[start], nums[end]});
                        }
                        start++, end--;
                    }
                    else if (nums[start] + nums[end] < search)
                        start++;
                    else
                        end--;
                }
            }
        }
        return result;
    }
};