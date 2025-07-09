#include <iostream>

// search element function
// int search(int arr[], int x) // this will give pitfal i.e.erroe also give size for correction.int arr[] is as pointer i.e.address

int search(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
            break;
        }
    }
    return -1;
}

// main function
int main()
{
    // array input .. hardcode
    int arr[] = {1, 2, 3, 5, 7, 3, 6, 8, 2, 0, 4, 1, 34, 12, 54, 2, 16};

    // user input
    int num;
    std::cout << "enter num to search: ";
    std::cin >> num;

    // find size
    int size = sizeof(arr) / sizeof(arr[0]);

    // calling function
    std::cout << search(arr, size, num) << std::endl;
}
