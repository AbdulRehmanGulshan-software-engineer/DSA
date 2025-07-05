// NOTE: pleaase run this code for better understanding of short circuit evaluation
#include <iostream>
int main()
{
    //&& operator 🔻
    std::cout << "\033[1;31mAND OPERATOR CASES\033[0m";

    int a = 2, b = 3;
    // if(0 && 1) case
    std::cout << "\n\033[1;34mif(0 && 1) case\033[0m" << std::endl;
    if (a > b && ++a < ++b)
        std::cout << "every operand evaluated" << std::endl;
    else
        std::cout << "second operand not evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // if(1 && 1) case
    std::cout << "\n\033[1;34mif(1 && 1) case\033[0m" << std::endl;
    if (a < b && ++a < ++b)
        std::cout << "every operand evaluated" << std::endl;
    else
        std::cout << "second operand not evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // if(1 && 0) case
    std::cout << "\n\033[1;34mif(1 && 0) case\033[0m" << std::endl;
    a = 2, b = 3; // again initializing as it can changed previosly
    if (a < b && ++a < ++b)
        std::cout << "every operand evaluated" << std::endl;
    else
        std::cout << "second operand not evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // if(0 && 0) case
    std::cout << "\n\033[1;34mif(0 && 0) case\033[0m" << std::endl;
    a = 2, b = 3; // again initializing as it can changed previosly
    if (a > b && ++a > ++b)
        std::cout << "every operand evaluated" << std::endl;
    else
        std::cout << "second operand not evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // OR(||) operator 🔻
    std::cout << "\033[1;31mOR OPERATOR CASES\033[0m" << std::endl;

    // if(0 || 1) case
    std::cout << "\n\033[1;34mif(0 || 1) case\033[0m" << std::endl;
    a = 2, b = 3; // again initializing as it can changed previosly
    if (a > b || ++a < ++b)
        std::cout << "every operand evaluated" << std::endl;
    else
        std::cout << "second operand not evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // if(1 || 1) case
    a = 2, b = 3; // again initializing as it can changed previosly
    std::cout << "\n\033[1;34mif(1 || 1) case\033[0m" << std::endl;
    if (a < b || ++a < ++b)
        std::cout << "only first operand evaluated" << std::endl;
    else
        std::cout << "every operand evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // if(1 || 0) case
    std::cout << "\n\033[1;34mif(1 || 0) case\033[0m" << std::endl;
    a = 2, b = 3; // again initializing as it can changed previosly
    if (a < b || ++a < ++b)
        std::cout << "only first operand evaluated" << std::endl;
    else
        std::cout << "every operand evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;

    // if(0 || 0) case
    std::cout << "\n\033[1;34mif(0 || 0) case\033[0m" << std::endl;
    if (a > b || ++a > ++b)
        std::cout << "every operand evaluated" << std::endl;
    else
        std::cout << "every operand evaluated" << std::endl;
    std::cout << a << " " << b << std::endl;
}