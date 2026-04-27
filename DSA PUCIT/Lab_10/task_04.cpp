#include <bits/stdc++.h>
using namespace std;

// starter node struct/class
struct Node
{
    int data;
    Node *next;

    // constructor with initializer list
    Node(int val) : data(val), next(nullptr) {};
};

Node *removeZeroSumSublists(Node *head)
{
    Node *temp = head;
    int sum = 0;
    // bool check = false;
    while (temp)
    {
        sum += temp->data;
        // check = true;
        if (sum == 0)
        {
            head = temp->next;
        }
        temp = temp->next;
    }
    return head;
}

// display function
void display(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    // creating input Hardcoded
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(-3);
    Node *n4 = new Node(3);
    Node *n5 = new Node(1);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // calling remove function
    Node *newLL = noderemoveZeroSumSublists(n1);
    // displaying function
    display(newLL);
    return 0;
}