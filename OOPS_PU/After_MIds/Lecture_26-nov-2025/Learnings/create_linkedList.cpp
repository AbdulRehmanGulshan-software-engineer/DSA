// coder army lecture 78 (not completed)

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

    // display function
    // void display()
    // {
    //     cout << this << " " << this->data << " " << this->next << endl;
    // }
};

int main()
{
    // lets we have an array to whom we have to store in linked list
    int arr[] = {1, 2, 3, 4};
    node *head;
    head = NULL;

    for (int i = 0; i < 4; i++)
    {
        if (head == NULL) // linkedlist does not exists
        {
            head = new node(arr[i]);
        }
        else // linked list exists
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = head;
            head = temp;
        }
        // head->display();
    }

    // print the value
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}