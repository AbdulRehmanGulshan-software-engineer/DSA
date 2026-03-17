// GCD of two numbers
//recursive solution

class Solution {
  public:
    int gcd(int a, int b) {
        // handled base case
        if(b==0)
            return a;
        
        gcd(b,a%b);
    }
};
