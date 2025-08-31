// 27. Remove Element
// Time Complexity : O(n)
// Space Complexity : O(1)
// This Solution Is Not Standard Method bro

/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val
*/

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {

        // two pointers technique
        int start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            // start index element is not val but last one is 2
            if (nums[start] != val && nums[end] == val)
            {
                start++;
                end--;
                nums.pop_back();
            }
            // start index and last index not 2
            else if (nums[start] != val && nums[end] != val)
            {
                start++;
            }
            // start is val and last is not
            else if (nums[start] == val && nums[end] != val)
            {
                swap(nums[start], nums[end]);
                nums.pop_back();
                start++;
                end--;
            }
            // both equal val
            else
            {
                end--;
                nums.pop_back();
            }
        }
        return nums.size();
    }
};