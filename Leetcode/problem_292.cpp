// problem : nim game
#include <iostream>

// nim_game function
bool canwinnim(int num)
{
    if (num % 4 == 0)
        return 0;
    else
        return 1;
}
// main function
int main()
{
    // user input
    int heap;
    std::cout << "enter heap count: ";
    std::cin >> heap;
    std::cout << canwinnim(heap) << std::endl;
    return 0;
}