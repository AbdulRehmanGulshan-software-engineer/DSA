#include <iostream>
#include <queue>
#include <fstream>
using namespace std;

class Node
{
public:
	int val;
	Node *next;
};
int main()
{
	Node a, b, c, d;
	a.val = 12;
	b.val = 15;
	c.val = 18;
	d.val = 25;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	// d.next = NULL (default)

	/*
	a.val = 12
	a.next->val = b.val = 15
	a.next->next->val = c.val = 18
	a.next->next->next->val = d.val = 25
	*/
	cout << a.val << ' ' << a.next->val << ' '
		 << a.next->next->val << ' ' << a.next->next->next->val << '\n';

	// Pointer Modification,adding new element between linked list
	b.next = new Node;
	b.next->val = 16;
	b.next->next = &c;
	cout << a.val << ' ' << a.next->val << ' '
		 << a.next->next->val << ' ' << a.next->next->next->val << ' ' << a.next->next->next->next->val << '\n';
	return 0;
}
