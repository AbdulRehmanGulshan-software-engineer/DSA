#include <iostream>
// digit_count function
int count_digit(int num)
{
    int count = 0;
    while (num)
    {
        num = num / 10;
        count++;
    }
    return count;
}
// armstrong function
void is_armstrong(int num)
{
    int count = count_digit(num);
    int t_ans = 0, rem;
    int y = num;
    while (y)
    {
        rem = y % 10;
        y = y / 10;
        int ans = 1;
        for (int i = 1; i <= count; i++)
            ans = ans * rem;
        // std::cout << ans << std::endl;
        t_ans = t_ans + ans;
    }
    if (num == t_ans)
        std::cout << "armstrong number";
    else
        std::cout << "not armstrong";
}

// main function
int main()
{
    int num;
    std::cout << "enter number: ";
    std::cin >> num;
    is_armstrong(num);
    return 0;
}