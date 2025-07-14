#include <iostream>
#include <climits>

int findPages(int arr[], int size, int k) {
    // store maximum of elements in start
    int start = INT_MIN;
    for(int i = 0; i < size; i++)
        if(start < arr[i])
            start = arr[i];
    
    // store total sum in end
    int end = 0;
    for(int i = 0; i < size; i++)
        end += arr[i];

    // best case return condition
    if(size < k)
        return -1;

    // binary search
    int mid, ans = -1;
    while(start <= end)
    {
        mid = start + (end - start) / 2;

        // distribution
        int count = 1, page = 0;
        for(int i = 0; i < size; i++)
        {
            page += arr[i];
            if(page > mid)
            {
                count++;
                page = arr[i];
            }
        }

        // left right decision
        if(count <= k)
        {
            ans = mid;
            end = mid - 1; // move left
        }
        else
            start = mid + 1; // move right
    }

    return ans;
}

int main()
{
    int arr[1000]; // initialized with fixed size

    // input size
    int n;
    std::cout << "Enter array size: ";
    std::cin >> n;

    // input array
    std::cout << "Enter array elements (e.g. 12 34 67 90): ";
    for(int i = 0; i < n; i++)
        std::cin >> arr[i];

    // input k
    int k;
    std::cout << "Enter number of students (k): ";
    std::cin >> k;

    std::cout << "Minimum pages: " << findPages(arr, n, k) << std::endl;
    return 0;
}
