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
    // create doubly linkedlist 👇
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

    // Delete at given position 👇
    int pos = 3; // Let

    // delete at start
    if (pos == 1)
    {
        // single node case
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // If more than one node exists
        else
        {
            node *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }
    else
    {
        node *curr = head;
        while (--pos)
            curr = curr->next;
        // delete at end
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
        // delete at middle
    }

    // Display 👇
    node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    return 0;
}
