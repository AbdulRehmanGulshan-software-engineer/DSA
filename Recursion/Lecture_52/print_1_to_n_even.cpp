// #include <iostream>
// using namespace std;

// void printEven(int num, int N)
// {
//     if (num == N)
//     {
//         cout << num;
//         return;
//     }
//     cout << num << endl;
//     printEven(num + 2, N);
// }

// int main()
// {
//     int N;
//     cin >> N;
//     if (N % 2 == 1)
//         N--;
//     printEven(2, N);
//     return 0;
// }

// single argument method order👇

#include <iostream>
using namespace std;

void printEven(int num)
{
    // stopage condition
    if (num == 2)
    {
        cout << num << endl;
        return;
    }
    printEven(num - 2);
    cout << num << endl;
}

int main()
{
    int N;
    cin >> N;
    if (N % 2 == 1)
        N--;
    printEven(N);
    return 0;
}
