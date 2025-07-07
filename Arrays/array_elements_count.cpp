#include <iostream>
int main()
{
    int arr[] = {1, 2, 5, 6, 3, 7, 5, 8, 9, 6, 4, 3, 2};
    int tot_elem = sizeof(arr) / sizeof(arr[0]); // in case of integer where each element is of 4 bytes
    std::cout << tot_elem << std::endl;
    return 0;
}