// 905. Sort Array By Parity

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end)
        {
            if (nums[start] % 2 == 1 && nums[end] % 2 == 0)
            {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
            else if (nums[start] % 2 == 0 && nums[end] % 2 == 1)
            {
                start++;
                end--;
            }
            else if (nums[start] % 2 == 0 && nums[end] % 2 == 0)
            {
                swap(nums[end], nums[++start]);
                start++;
            }
            else // both are odd
            {
                swap(nums[start], nums[--end]);
                end--;
            }
        }
        return nums;
    }
};