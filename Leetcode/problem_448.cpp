// 448. Find All Numbers Disappeared in an Array

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        // create an array for marking
        vector<int> result(nums.size(), 0);

        // iterate and mark
        for (int i = 0; i < nums.size(); i++)
            result[nums[i] - 1] = 1;

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (result[i] == 0)
                ans.push_back(i + 1);
        }
        return ans;
    }
};