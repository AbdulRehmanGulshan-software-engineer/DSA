// Lecture Link : https://www.youtube.com/watch?v=_b0bfpO3b4I&list=PLQEaRBV9gAFsIul2ATmw7xP4eaQsjS_Lm&index=1

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    // constructor
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{
    int x;
    cout << "Enter The root Element : ";
    cin >> x;
    int first, second;
    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);

    // Build the Binary Tree
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the left child of " << temp->data << " : ";
        cin >> first; // value of left node
        // left node
        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        // right node
        cout << "Enter the right child of " << temp->data << " : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}