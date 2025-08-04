// better approach for this question is Boyer-Moore Majority Vote Algorithm
// this method is clever but causing integer overflow

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // array size
        int n = nums.size(),ans;

        // decrease each element by 1
        for (int i = 0; i < n; i++)
            nums[i]--;

        // maximum element
        int max = *max_element(nums.begin(), nums.end()) + 1;

        for (int i = 0; i < n; i++)
            nums[nums[i] % max] += max;  // overflow problem here

        for (int i = 0; i < max; i++)
            if (nums[i]/max > n / 2) {
                ans = i + 1;
            }
        return ans;
    }
};