#include <iostream>
int main()
{
    // first method 👇
    // std::cout << "\t\tPrint Table Of Number" << std::endl;
    // int tab_num;
    // std::cout << "Enter number: ";
    // std::cin >> tab_num;
    // int num = tab_num;
    // for (int i = 1; i <= 10; i++)
    // {
    //     std::cout << tab_num << " * " << i << " = " << num << std::endl;
    //     num += tab_num;
    // }

    // second method 👇
    // int num;
    // std::cout << "enter number: ";
    // std::cin >> num;
    // int count = 1;
    // for (int i = num; i <= num * 10; i = i + num)
    // {
    //     std::cout << "num" << " * " << count << " = " << i << std::endl;
    //     count++;
    // }

    // third method 👇
    int num;
    std::cout << "enter number: ";
    std::cin >> num;
    for (int i = 1; i <= 10; i++)
        std::cout << num << " * " << i << " = " << num * i << std::endl;
    return 0;
}