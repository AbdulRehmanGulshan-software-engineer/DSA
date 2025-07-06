#include <iostream>
// sum function
int sum(int num1, int num2) // function declaration , multiple parameter
{                           // function define
    int ans = num1 + num2;
    return ans;
}
// multiplication function
int multiply(int num1, int num2)
{
    int ans = num1 * num2;
    return ans;
}
int main()
{
    int a, b;
    std::cout << "enter two numbers: ";
    std::cin >> a >> b; // user input
    // function call
    std::cout << "sum = " << sum(a, b) << std::endl;
    std::cout << "multiplication = " << multiply(a, b) << std::endl;
    // second way
    int sum_ans = sum(a, b);
    std::cout << "sum = " << sum_ans << std::endl;
    int mul_ans = multiply(a, b);
    std::cout << "multiplication = " << mul_ans << std::endl;
    return 0;
}