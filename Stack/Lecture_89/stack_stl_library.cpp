#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(2);
    s.push(6);
    s.push(5);
    cout << s.size() << endl;
    // top
    cout << s.top() << endl;
    cout << s.empty();
}