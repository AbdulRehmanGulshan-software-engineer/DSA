#include <iostream>
int main()
{
    // logical operator 🔻
    // int a, b, c;
    // std::cin >> a >> b >> c;

    // AND(&&) operator ⬇️
    if (a > b && a > c)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    // OR(||) operator ⬇️
    char name = 'a';
    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u')
        std::cout << "Vowel" << std::endl;
    else
        std::cout << "consonant";

    // // NOT operator ⬇️
    // std::cout << !23 << std::endl;
    // std::cout << !0 << std::endl;
    // return 0;
}