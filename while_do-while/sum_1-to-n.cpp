#include <iostream>
int main()
{
    int n;
    std::cout << "enter number: ";
    std::cin >> n;
    int sum = 0;
    int i = 1; // initialize
    do
    {
        sum += i;
        i++; //update
    } while (i <= n); //break condition
    std::cout << "sum is : " << sum;
    return 0;
}