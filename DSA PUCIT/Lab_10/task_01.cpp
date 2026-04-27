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

// check if present
bool check(vector<Node *> stored, Node *curr)
{
    for (int i = 0; i < stored.size(); i++)
        if (stored[i] == curr)
            return 1;
    return 0;
}

// function to check loop
void removeLoop(Node *head)
{
    Node *curr = head;
    vector<Node *> stored;
    while (curr)
    {
        if (check(stored, curr->next))
        {
            // setting last node
            curr->next = nullptr;
            return; // end
        }
        stored.push_back(curr);
        curr = curr->next;
    }
    return; // end just remain everything as it is
}

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
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    Node *n7 = new Node(7);
    Node *n8 = new Node(8);
    Node *n9 = new Node(9);
    Node *n10 = new Node(10);
    Node *n11 = new Node(11);
    Node *n12 = new Node(12);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;
    n10->next = n11;
    n11->next = n12;
    n12->next = n4;

    // calling function
    removeLoop(n1);
    // calling display function
    display(n1);

    return 0;
}