class Solution
{
public:
    bool binarySearch(vector<int> &arr, int target, int start, int end)
    {
        // base case
        if (start > end)
            return 0;

        // handles minor problem
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return 1;
        else if (arr[mid] < target)
            return binarySearch(arr, target, mid + 1, end);
        else
            return binarySearch(arr, target, start, mid - 1);
    }

    bool searchInSorted(vector<int> &arr, int k)
    {
        // called my recursive function
        return binarySearch(arr, k, 0, arr.size() - 1);
    }
};