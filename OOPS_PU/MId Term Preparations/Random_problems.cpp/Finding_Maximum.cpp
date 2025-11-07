#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[6] = {5, 8, 2, 10, 3, 7};
    int max = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Maximum Element Is : " << max;
    return 0;
}