// 3105. Longest Strictly Increasing or Strictly Decreasing Subarray
// 😂 bad runtime and memory



// Function To Check Strictly Increasing
int increasing(vector<int> array)
{
    for (int i = 1; i < array.size(); i++)
    {
        if (array[i] <= array[i - 1])
            return 0;
    }
    return 1;
}

// Function To Check Strictly Decreasing
int decreasing(vector<int> array)
{
    for (int i = 1; i < array.size(); i++)
    {
        if (array[i] >= array[i - 1])
            return 0;
    }
    return 1;
}

class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        // Subarray
        for (int i = nums.size(); i >= 2; i--)
        {
            for (int j = 0; j < nums.size() + 1 - i; j++)
            {
                vector<int> result(i, 0);
                int l = 0;
                for (int k = j; k < j + i; k++)
                    result[l++] = nums[k];

                // Check And Store maximum Size
                if (increasing(result))
                    return result.size();
                if (decreasing(result))
                    return result.size();
            }
        }
        return 1;
    }
};