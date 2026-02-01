// Coder Army Lecture 78 (Not Completed)

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

int main()
{
    // node A1(4);

    // create dynamically ⬇
    // node *head;
    // head = new node(4);
    // cout << head->data << endl;
    // cout << head->next << endl;

    node *head;
    head = NULL;
    if (head == NULL)
    {
        head = new node(28);
    }
    else
    {
        node *temp;
        temp = new node(28);
        temp->next = head;
        head = temp;
    }
    return 0;
}