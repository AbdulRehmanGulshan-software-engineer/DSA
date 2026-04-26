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
        next = prev = nullptr;
    }

    // Insert at start
};

node *CreateDLL(int arr[], int index, int size, node *back)
{
    // base case
    if (index == size)
        return NULL;
    node *temp = new node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);
    return temp;
}

displayDDl(node *head)
{
    node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    node *head = CreateDLL(arr, 0, 5, NULL);

    int pos = 3;
    // insert at start
    if (pos == 0)
    {
        // linkedlist does not exist
        if (head == NULL)
        {
            head = new node(5);
        }
        // linkedlist exist
        {
            node *temp = new node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        // go to the node after which i have to insert
        node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        };
        // insert at end
        if (curr->next == NULL) // Last Node
        {
            node *temp = new node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // insert at middle
        else
        {
            node *temp = new node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    // Display
    displayDDl(head);

    return 0;
}
