#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;

    DLL()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        // if linkedlist is empty
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
            head->prev = tail;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            tail->next = head;
            head->prev = tail;
        }
    }

    void display()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
};

int main()
{

    DLL List;
    List.insertAtEnd(10);
    List.insertAtEnd(20);
    List.insertAtEnd(30);

    List.display();
    return 0;
}