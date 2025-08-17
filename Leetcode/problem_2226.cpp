// 2226. Maximum Candies Allocated to K Children
// time complexity = O(n log n)
// auxilary space complexity = O(1)

class Solution
{
public:
    int maximumCandies(vector<int> &candies, long long k)
    {
        int start = 1, mid = 0, ans = 0;
        // find maximum element and store in end
        int end = INT_MIN;
        for (int i = 0; i < candies.size(); i++)
            end = max(end, candies[i]);

        // binary search technique
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            long long count = 0;
            for (int i = 0; i < candies.size(); i++)
                count += candies[i] / mid;
            // below if condition was amazing , 😂
            // previously i was using if(count == k) return mid; that was bug
            if (count >= k)
            {
                ans = mid;
                start = mid + 1;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};