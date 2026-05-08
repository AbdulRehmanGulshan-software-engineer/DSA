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

    // // Deleting first node 👇
    // if (head != NULL)
    // {
    //     node *temp = head;
    //     head = head->next;
    //     delete temp;
    //     // edge case (if only one node exist)
    //     if (head)
    //     {
    //         head->prev = NULL;
    //     }
    // }

    // // Deleting first node 👇
    if (head != NULL)
    {

        // Single node case
        if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }

    // Deleting Last Node 👇
    // Traverse till last node first
    if (head != NULL)
    {
        node *curr = head;
        // if only one node exists
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // if more than one node exists
        else
        {
            while (curr->next)
            {
                curr = curr->next;
            }
            curr->prev->next = NULL;
            delete curr;
        }
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
