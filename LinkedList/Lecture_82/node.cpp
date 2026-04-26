#include <bits/stdc++.h>
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
        next = prev = nullptr;
    }

    // Insert at start
};

int main()
{
    node *head = NULL;
    node *tail = NULL;

    // Insertion at start
    // LinkedList doesn't exist
    if (head == NULL)
    {
        head = tail = new node(5);
    }
    // Already exist
    else
    {
        node *temp = new node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    // // insertion at end
    // // first reach till last
    // node *curr = head;
    // while (curr->next != NULL)
    //     curr = curr->next;
    // node *temp = new node(5);
    // curr->next = temp;
    // temp->prev = curr;

    // create doubly linkedlist
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        // Linked List doesn't exist
        if (head == NULL)
        {
            head = new node(arr[i]);
            tail = head;
        }
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
