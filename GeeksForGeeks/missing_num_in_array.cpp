#include <iostream>
int main()
{
    int arr[5] = {1, 2, 3, 5, 6}; // hard_coded

    // array sum
    int sum_array = 0;
    for (int i = 0; i < 5; i++)
        sum_array += arr[i];

    // sum of n numbers
    // for size = 5 it can contain 1,2,3,4,5,6 ... 6 possible elements
    int n = 5 + 1;
    int sum_no = n * (n + 1) / 2;

    int missing = sum_no - sum_array;
    std::cout << missing << std::endl;
    return 0;
}