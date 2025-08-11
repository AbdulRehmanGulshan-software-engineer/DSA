// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // create vector for answer
        vector<int>ans(1,1);
        while(n > 1) // 1 is not included
    {
        int carry = 0,result,size = ans.size();
        for(int i = 0;i < size;i++)
        {
            result = ans[i]*n+carry;
            carry = result/10;
            ans[i] = result%10;
        }
        // maybe carry still remain
        while(carry)
        {
            ans.push_back(carry%10);
            carry = carry/10;
        }
        n--;
    }
    // reverse the ans array to get required answer
    reverse(ans.begin(),ans.end());
    return ans;
    }
};