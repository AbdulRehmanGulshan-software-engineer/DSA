#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    // constructor,initializer list
    Node(int x) : val(x), next(nullptr) {};
};

// adding singly linkedlist class

int main()
{
    Node *head, *tail;
    head = tail = nullptr; // initially
    // input from user
    int val, num;
    cout << "Enter Number Of Values To Add : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << "Enter Element To Add : ";
        cin >> val;
        if (i == 1)
        {
            head = new Node(val); // if i == 0,for first
            head->next = nullptr;
            tail = head;
        }
        // for second input and onward
        tail->next = new Node(val);

        tail = tail->next;
        tail->next = nullptr;
    }

    // printing existing created Linked List
    Node *temp = head->next; // point
    cout << "Entered Elements In LinkedList: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    // Node *temp1 = head->next;
    // for (int i = 0; i <= num; i++)
    // {
    //     // take last one
    //     while (temp1 != nullptr)
    //         temp1 = temp1->next;
    //     // attach after head after
    //     Node *tempo = new Node(head->next->next);
    //     head->next->next = temp1;
    //     tempo->next = head->next->next;
    // }
    return 0;
}