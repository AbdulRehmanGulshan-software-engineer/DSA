// linked-list stack implementation
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class stack
{
    node *top;
    int size; // actual size of stack
public:
    stack()
    {
        top = NULL;
        size = 0;
    }
    // push
    void push(int value)
    {
        node *temp = new node(value);
        if (temp == NULL)
        {
            cout << "Stack Overflow.\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
        cout << "Pushed " << value << " into the stack.\n";
    }
    // pop
    void pop()
    {
        if (top == nullptr)
        {
            cout << "Stack Underflow.\n";
            return;
        }
        node *temp = top; // taking this just to delete
        cout << "Popped " << top->data << " from the stack.\n";
        top = top->next;
        delete temp;
        size--;
    };
    // peek
    int peek()
    {
        return top->data; // assume user will check empty before calling
    }
    // isEmpty
    bool isEmpty()
    {
        return top == nullptr;
    }
    // isSize
    int isSize()
    {
        return size;
    }
};

int main()
{
    stack s;
    s.push(3);
    s.push(1);
    s.push(7);
    s.push(9);
    if (!s.isEmpty())
        cout << s.peek() << endl;
    else
        cout << "Stack is empty.\n";
    s.pop();
    cout << s.isSize() << endl;
    return 0;
}