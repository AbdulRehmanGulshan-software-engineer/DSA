// problem : Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
#include <iostream>
int main()
{
    // input by user
    int num, temp;
    std::cout << "enter the number: ";
    std::cin >> num;
    // problem code
    while (num > 9)
    {
        int rem, ans = 0;
        while (num)
        {
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        num = ans;
        temp = ans; // due to variable scope problem
    }
    std::cout << temp << std::endl;
};