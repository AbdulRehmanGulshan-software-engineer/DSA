// in this implementation i will not use flag for isSize operation possible bug/problem solution
#include <iostream>
using namespace std;

// Implement it with array
class Stack
{
private:
    int *arr;
    int size;
    int topIndex;

public:
    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        topIndex = -1;
    }
    // push operation
    void push(int value)
    {
        if (topIndex == size - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = value;
    }
    // pop operation
    void pop()
    {
        if (topIndex == -1)
        {
            cout << "stack underflow\n";
            return;
        }
        topIndex--;
    }
    // top operation
    int top()
    {
        return arr[topIndex]; // assumed user will check empty before calling
    }
    // isempty solution
    bool isEmpty()
    {
        return topIndex == -1;
    }
    // size operation
    int sizeOfStack()
    {
        return topIndex + 1;
    }
    // status
    void status()
    {
        if (!isEmpty())
            cout << top() << endl;
        else
        {
            cout << "Stack is empty.\n";
            return;
        }
        if (topIndex + 1 == size)
            cout << "Stack is full.\n";
        // percentage
        double available = size - (topIndex + 1);
        double percentage = (available / size) * 100;
        cout << "Available Space: " << percentage << "%\n";
    }
    //  destructor
    ~Stack()
    {
        delete[] arr;
    }
};
int main()
{
    // created object
    Stack s(5);

    // correct way i will use to check top
    // if (!s.isEmpty())
    //     cout << s.top() << endl;
    // else
    //     cout << "Stack is Empty." << endl;
    s.push(2);
    s.status();

    return 0;
}