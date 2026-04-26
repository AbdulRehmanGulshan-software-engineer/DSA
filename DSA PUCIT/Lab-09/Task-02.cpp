// from previous question
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
    // one rotation logic
    // get tail in temp,change tail
    Node *temp = tail;
}