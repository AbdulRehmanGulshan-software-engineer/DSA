// 217. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // first sort the array
        sort(nums.begin(),nums.end());
        // check for duplicate
        for(int i = 0 ;i < nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }
};