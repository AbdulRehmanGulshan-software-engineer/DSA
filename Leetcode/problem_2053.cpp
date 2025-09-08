// 2053. Kth Distinct String in an Array
// will solve it later with hash table

class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        int count = 0;
        string ans;
        for (int i = 0; i < arr.size(); i++)
        {
            bool check = 0;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                {
                    arr.erase(arr.begin() + j);
                    j--;
                    check = 1;
                }
            }
            if (check == 0)
            {
                count++;
                ans = arr[i];
            }
            if (count == k)
                break;
        }
        if (count == k)
            return ans;
        else
            return "";
    }
};