// 441. Arranging Coins

class Solution
{
public:
    int arrangeCoins(int n)
    {
        int result = 0;
        int start = 1, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            long long series_sum = 1LL * mid * (mid + 1) / 2;
            if (series_sum == n)
                return mid;
            else if (series_sum < n)
            {
                result = max(result, mid);
                // move right
                start = mid + 1;
            }
            else
            {
                // move left
                end = mid - 1;
            }
        }
        return result;
    }
};