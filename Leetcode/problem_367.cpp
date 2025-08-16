// 367. Valid Perfect Square

// binary search algorithm , Time Complexity = O(log n)
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int start = 1, end = num;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid == num / mid && num % mid == 0)
                return true;
            else if (mid > num / mid)
                end = mid - 1; // move left
            else
                start = mid + 1; // move right
        }
        return false;
    }
};