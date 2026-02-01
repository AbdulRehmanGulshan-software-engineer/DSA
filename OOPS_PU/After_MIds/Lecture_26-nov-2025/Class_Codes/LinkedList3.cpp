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
	cout << a.val << ' ' << a.next->val << ' '
		 << a.next->next->val << ' ' << a.next->next->next->val << '\n';

	// adding new elemnet between linked list
	b.next = new Node;
	b.next->val = 16;
	b.next->next = &c;
	cout << a.val << ' ' << a.next->val << ' '
		 << a.next->next->val << ' ' << a.next->next->next->val << ' ' << a.next->next->next->next->val << '\n';


	// printing linked list
	Node *temp = &a;
	// for (int i = 0; i < 5; i++)   //sir method
	while (temp != NULL)		// coder army method
	{
		cout << temp->val << ' ';
		temp = temp->next;
	}
	cout << '\n';


	// insert new element in start	
	temp = new Node;
	temp->val = 10;
	temp->next = &a;
	for (int i = 0; i < 6; i++)
	{
		cout << temp->val << ' ';
		temp = temp->next;
	}

	return 0;
}
