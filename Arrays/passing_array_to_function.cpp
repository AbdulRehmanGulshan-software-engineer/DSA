#include <iostream>

void fun(int a[], int n) // this a[] is not array it is pointer i.e.address
{
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
        std::cout << "\n" << sizeof(a); //this will print 4 not 20 so its pointer not array
}
int main()
{
    int a[5] = {3, 2, 1, 6, 7}; // this a[5] is array
    fun(a, 5);
    std::cout << "\n" << sizeof(a); //this will print 20
    return 0;
}