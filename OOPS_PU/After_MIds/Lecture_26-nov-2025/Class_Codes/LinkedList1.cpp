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

	/*
	a.val = 12
	a.next->val = b.val = 15
	a.next->next->val = c.val = 18
	a.next->next->next->val = d.val = 25
	*/
	cout << a.val << ' ' << a.next->val << ' '
		 << a.next->next->val << ' ' << a.next->next->next->val << '\n';

	/*
	b.val = 15
	b.next->val = c.val = 18
	b.next->next->val = d.val = 25
	*/
	cout << b.val << ' ' << b.next->val << ' '
		 << b.next->next->val << '\n';
	b.next = &d;
	d.next = &a;
	a.next = &c;
	cout << b.val << ' ' << b.next->val << ' '
		 << b.next->next->val << ' ' << b.next->next->next->val << '\n';
	return 0;
}
