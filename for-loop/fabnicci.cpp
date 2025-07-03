#include <iostream>
int main()
{
    std::cout << "\t\tFabnicci series" << std::endl;
    int last, prev, curr, term;
    std::cout << "enter terms count: ";
    std::cin >> term;
    last = 0;
    prev = 1;
    int sum = last + prev; //variable for sum
    std::cout << last << "," << prev;
    for (int i = 1; i <= term-2; i++)
    {
        curr = last + prev;
        sum = sum + curr;
        std::cout << "," << curr;
        last = prev;
        prev = curr;
    }
    std::cout << "\nSum of series = " << sum << std::endl;

    return 0;
}