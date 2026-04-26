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
    displayDDl(head);
    return 0;
}