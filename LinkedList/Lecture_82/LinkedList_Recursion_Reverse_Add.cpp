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

// Recursive function   5,4,3,2,1
node *CreateDLL(int arr[], int index, int size, node *back)
{
    // base case
    if (index == size)
        return NULL;
    node *temp = new node(arr[index]);
    temp->next = back;
    temp->prev = CreateDLL(arr, index + 1, size, temp);
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
    node *tail = CreateDLL(arr, 0, 5, NULL);

    // go to head
    node *head = tail;
    while (head->prev != NULL)
        head = head->prev;

    displayDDl(head);
    return 0;
}