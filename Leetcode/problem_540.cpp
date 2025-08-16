// 540. Single Element in a Sorted Array

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        // store result as last element
        int result = nums[nums.size() - 1];
        int start = 0, end = nums.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            // if mid is odd 🔻
            if (mid % 2 == 1)
            {
                if (nums[mid] == nums[mid - 1])
                {
                    // move right
                    start = mid + 1;
                }
                else
                {
                    // store even one
                    result = nums[mid - 1];
                    // move left
                    end = mid - 1;
                }
            }
            else // mid is even 🔻
            {
                if (nums[mid] == nums[mid + 1])
                {
                    // move right
                    start = mid + 1;
                }
                else
                {
                    // store even one
                    result = nums[mid];
                    // move left
                    end = mid - 1;
                }
            }
        }
        return result;
    }
};