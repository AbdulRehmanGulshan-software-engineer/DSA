// 1299. Replace Elements with Greatest Element on Right Side
// solution's Time Complexity = O(n)
// solution's Auxilary Space Complexity = O(n)

/*
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        // size of array
        int n = arr.size();

        // making array , taking all elements as -1 initially
        vector<int> result(n, -1);

        // making given array last index as maximum
        int maximum = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            result[i] = maximum;
            maximum = max(maximum, arr[i]); // if this index element of given arr is greater take it for replacing, simply
        }

        // return
        return result;
    }
};