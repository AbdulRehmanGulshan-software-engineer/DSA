#include <iostream>
using namespace std;

// starter node struct/class
struct Node
{
    int data;
    Node *next;

    // constructor with initializer list
    Node(int val) : data(val), next(nullptr) {};
};

// Add two numbers
Node *addTwoNumbers(Node *L1, Node *L2)
{
    string LL1 = "";
    Node *temp1 = L1;
    while (temp1)
    {
        LL1 = LL1 + to_string(temp1->data);
        temp1 = temp1->next;
    }

    string LL2 = "";
    Node *temp2 = L2;
    while (temp2)
    {
        LL2 = LL2 + to_string(temp2->data);
        temp2 = temp2->next;
    }

    int sum = stoi(LL1) + stoi(LL2);
    string finalString = to_string(sum);

    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < finalString.size(); i++)
    {
        // first entry
        if (head == NULL)
        {
            // int num = stoi(finalString[i]);
            // head = tail = new Node(num);
            head = tail = new Node(finalString[i]);
            tail->next = NULL;
        }
        else
        {
            // int num = stoi(finalString[i]);
            // Node *tem = new Node(num);
            Node *tem = new Node(finalString[i]);
            tail->next = tem;
            tail = tem;
        }
    }
    return head;
}

int main()
{
    // string hello = "100";
    // // int number = stoi(hello);
    // // cout << number << endl;
    // // // string by = "200";
    // for (int i = 0; i < hello.size(); i++)
    //     cout << hello[i] << " ";

    return 0;
}