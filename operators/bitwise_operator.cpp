#include <iostream>
int main()
{
    // bitwise operator 🔻
    // bitwise AND (&) operator
    int a = 2 & 3;
    std::cout << a << std::endl;
    // bitwise OR (|) operator
    int b = 2 | 3;
    std::cout << b << std::endl;
    // bitwise XOR operator
    int c = 2 ^ 3;
    std::cout << c << std::endl;
    // left_shift operator formula = (num * 2^x)
    int d = 6 << 2;
    std::cout << d << std::endl;
    // right-shift operator formula = num/2^x
    int e = 6 >> 2;
    std::cout << e << std::endl;
    // complement operator
    int f = ~5;
    std::cout <<  f << std::endl;
    return 0;
}