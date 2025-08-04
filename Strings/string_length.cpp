// finding string size without using .size()

#include <iostream>
using namespace std;
int main()
{
    string str = "gulshan";
    int size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    cout << "string size : " << size;
    return 0;
};