// Climbing Stairs

//recursive solution 👇
class Solution
{
public:
    int climbStairs(int n)
    {
        // recursive solution
        // handled base cases
        if (n <= 1)
            return 1;

        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};
// Currently TLE(Time Limit Exceeded),will solve this question later with dynamic programming.In recursion we face such TLE.

// Accepted solution using for loop 👇
class Solution
{
public:
    int climbStairs(int n)
    {
        // using for loop
        //handles base case
        if (n <= 2)
            return n;

        //used simple approach
        int first = 1;
        int second = 2;
        int sum = 0;
        for (int i = 3; i <= n; i++)
        {
            sum = first + second;
            first = second;
            second = sum;
        }
        return sum;
    }
};