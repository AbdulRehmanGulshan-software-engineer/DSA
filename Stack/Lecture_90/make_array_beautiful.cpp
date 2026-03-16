#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> makeBeautiful(vector<int> arr)
    {
        vector<int> temp;
        if (arr.size() >= 1)
            temp.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++)
        {
            if ((temp[temp.size() - 1] >= 0 && arr[i] >= 0) || (temp[temp.size() - 1] < 0 && arr[i] < 0))
                temp.push_back(arr[i]);
            else
            {
                temp.pop_back();
                if (i <= (arr.size() - 1))
                    temp.push_back(arr[++i]);
            }
        }
        return temp;
    }
};
int main()
{

    return 0;
}