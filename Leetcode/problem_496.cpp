// 496. Next Greater Element I

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        // vector to return
        vector<int> result(nums1.size(), -1);

        int index, i, j, k;
        for (i = 0; i < nums1.size(); i++)
        {
            for (j = 0; j < nums2.size(); j++)
            {
                if (nums2[j] == nums1[i])
                {
                    // store this index
                    index = j; // index must be present as nums1 is subset of nums2
                    break;
                }
            }
            for (k = j + 1; k < nums2.size(); k++)
            {
                if (nums2[k] > nums2[j])
                {
                    result[i] = nums2[k];
                    break;
                }
            }
        }
        return result;
    }
};