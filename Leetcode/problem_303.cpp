// i am following coder army lecture concept of this,etc
// this question has done by brute force in calculating range,not prefix sum
class NumArray
{
    vector<int> nums;

public:
    // parameterized constructor
    NumArray(vector<int> &nums) { this->nums = nums; }

    // function that will return
    int sumRange(int left, int right)
    {
        int sum = 0;
        for (int i = left; i <= right; i++)
        {
            sum += nums[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */