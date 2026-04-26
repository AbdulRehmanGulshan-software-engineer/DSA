#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = prev = NULL;
    }
};

int main()
{
    node *head = NULL;
    node *tail = NULL;
    // create doubly linkedlist
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        // Linked List doesn't exist
        if (head == NULL)
            head = tail = new node(arr[i]);
        // Exist
        else
        {
            node *temp = new node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // display
    node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    return 0;
}
