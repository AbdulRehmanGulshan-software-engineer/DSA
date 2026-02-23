#include <iostream>
using namespace std;

// Implement it with array
class Stack
{
private:
    int *arr;
    int size;
    int top;

public:
    bool flag; // for isEmpty operation problem,we are using this flag
    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
        flag = 1;
    }
    // push operation
    void push(int value)
    {
        // handled edge case
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            arr[++top] = value;
            cout << "Pushed " << value << " into the stack." << endl;
            flag = 0;
        }
    }
    // pop operation
    void pop()
    {
        if (top == -1)
            cout << "stack underflow" << endl;
        else
        {
            top--;
            cout << "Popped " << arr[top + 1] << " from the stack" << endl;
            if (top == -1)
                flag = 1; // stack has become empty
        }
    }
    // top operation
    int isTop()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else
            return arr[top];
    }
    // isempty solution
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    // size operation
    int isSize()
    {
        return top + 1;
    }
};
int main()
{
    // creating object
    Stack s(5);
    // s.push(5);
    // s.push(6);
    // s.push(8);
    // s.push(8);
    // s.push(8);
    // s.push(8);
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // cout << s.isTop() << endl;
    // cout << s.isSize();
    // cout << s.isTop() << endl;
    // s.push(-1);
    // cout << s.isTop() << endl;

    // correct way i will use to check top
    int value = s.isTop();
    if (s.flag == 0)
        cout << value << endl;
    return 0;
}