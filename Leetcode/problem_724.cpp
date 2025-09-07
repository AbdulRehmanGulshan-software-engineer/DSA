// 724. Find Pivot Index
// Note : first i try to solve this using two pointers approach , but oh God , not solved 😂
// then i think for prefix , similar problem concept(divide array in two subarray with equal sum) discussed in coder army lecture 29

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        // find total sum
        int total = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            total += nums[i];
        }

        // declared left sum
        int leftSum = 0, rightSum;
        for (int i = 0; i < nums.size(); i++)
        {
            rightSum = total - leftSum - nums[i];
            if (leftSum == rightSum)
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};