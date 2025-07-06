#include <iostream>

// factorial function
int fact(int num  ) // by default giving 3,if user not give any argument
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
        ans *= i;

    return ans;
}

// main function
int main()
{
    std::cout << fact();
}
