#include <iostream>
int main()
{
    // user input
    int n;
    std::cout << "enter term num to find : ";
    std::cin >> n;

    int arr[1000];
    arr[0] = 0, arr[1] = 1;

    for (int i = 2; i <= n; i++) // ,=n due to leetcode statement
        arr[i] = arr[i - 1] + arr[i - 2];

    std::cout << arr[n] << std::endl;
    return 0;
}