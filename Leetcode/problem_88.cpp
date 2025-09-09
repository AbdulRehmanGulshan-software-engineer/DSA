// 88. Merge Sorted Array

// doing it by selection sort algorithm
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // first merge these arrays simply
        int k = 0;
        for (int i = m; i < m + n; i++)
        {
            nums1[i] = nums2[k++];
        }
        // now apply selection sort algorithm
        for (int i = 0; i < m + n - 1; i++)
        {
            int ind = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums1[j] < nums1[ind])
                    ind = j;
            }
            swap(nums1[ind], nums1[i]);
        }
    }
};