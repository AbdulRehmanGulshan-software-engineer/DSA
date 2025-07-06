#include <iostream>
// convert function
char convert(char &name)
{
    char ans = name - 'a' + 'A';
    return ans;
}
int main()
{
    // input character
    char c;
    std::cout << "enter character: ";
    std::cin >> c;

    // function calling
    std::cout << convert(c);
    return 0;
}