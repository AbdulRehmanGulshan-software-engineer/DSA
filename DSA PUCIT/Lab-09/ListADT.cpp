#include <iostream>
using namespace std;

// ═══════════════════════════════
//  NODE — a single box in the chain
// ═══════════════════════════════
struct Node
{
    int data;
    Node *next;

    // Empty node
    Node()
    {
        next = 0;
    }

    // Node with value and optional link to next
    Node(int e1, Node *ptr = 0)
    {
        data = e1;
        next = ptr;
    }
};

// ═══════════════════════════════
//  SINGLY LINKED LIST — the manager
// ═══════════════════════════════
class SinglyLList
{
    Node *head, *tail;

public:
    // Start empty
    SinglyLList()
    {
        head = tail = 0;
    }

    // Check if list is empty
    int isEmpty()
    {
        return head == 0;
    }

    /*Add to head*/
    void addToHead(int e1)
    {
        head = new Node(e1, head); // new node points to old head
        if (tail == 0)             // if list was empty
            tail = head;           // same node is also tail
    }

    /*Add to tail*/
    void addToTail(int e1)
    {
        if (tail != 0)
        { // list has nodes
            tail->next = new Node(e1);
            tail = tail->next; // move tail forward
        }
        else
        { // list was empty
            head = tail = new Node(e1);
        }
    }

    /*Delete from head*/
    int deleteFromHead()
    {
        int e1 = head->data; // save value before destroying
        Node *tmp = head;    // save address before losing it
        if (head == tail)    // only one node
            head = tail = 0;
        else
            head = head->next; // move head forward
        delete tmp;            // destroy old head from RAM
        return e1;
    }

    // ───────────────────────────
    //  DELETE FROM TAIL
    // ───────────────────────────
    int deleteFromTail()
    {
        int e1 = tail->data; // save value before destroying
        if (head == tail)
        { // only one node
            delete tail;
            head = tail = 0;
        }
        else
        {
            Node *tmp = head;
            while (tmp->next != tail) // walk to second-to-last
                tmp = tmp->next;
            delete tail;    // destroy old tail from RAM
            tail = tmp;     // second-to-last becomes new tail
            tail->next = 0; // it is now the last node
        }
        return e1;
    }

    // ───────────────────────────
    //  IS VALUE IN LIST?
    // ───────────────────────────
    bool isInList(int e1)
    {
        Node *tmp = head;
        while (tmp != 0)
        { // walk every node
            if (tmp->data == e1)
                return true;
            tmp = tmp->next;
        }
        return false;
    }

    SinglyLList concatenate(SinglyLList list1, SinglyLList list2)
    {
        /*this approach is 0(n) and traverse the whole list and
        preserve the original lists*/
        SinglyLList result;
        Node *temp = list1.head;
        while (temp)
        {
            result.addToTail(temp->data);
            temp = temp->next;
        }

        Node *temp2 = list2.head;
        while (temp2)
        {
            result.addToTail(temp2->data);
            temp2 = temp2->next;
        }
        return result;
        /*Second approach is 0(1) do not preserve the original lists*/
        if (list1.isEmpty())
        {
            result.head = list2.head;
            result.tail = list2.tail;
        }
        else if (list2.isEmpty())
        {
            result.head = list1.head;
            result.tail = list2.tail;
        }
        else
        {
            list1.tail->next = list2.head;
            list1.tail = list2.tail;
            result.head = list1.head;
            result.tail = list1.tail;
        }

        /*Now delete the old pointers to prevent the memory crash
        while double deleting*/
        list1.head = list1.tail = 0;
        list2.head = list2.tail = 0;
    }

    // ───────────────────────────
    //  DELETE SPECIFIC NODE
    // ───────────────────────────
    void deleteNode(int e1)
    {
        if (head->data == e1)
        { // target is head
            deleteFromHead();
            return;
        }
        Node *prev = head;
        Node *curr = head->next;
        while (curr != 0)
        { // walk with two pointers
            if (curr->data == e1)
            {
                prev->next = curr->next; // skip over curr
                if (curr == tail)        // if it was tail
                    tail = prev;         // update tail
                delete curr;
            }
            prev = curr;
            curr = curr->next;
        }
    }
};