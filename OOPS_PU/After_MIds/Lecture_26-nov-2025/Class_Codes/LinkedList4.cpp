#include <iostream>
#include <queue>
#include <fstream>
using namespace std;

class Node {
	public:
		int val;
		Node *next;
		Node(int val, Node* next = nullptr){
			this -> val = val;
			this -> next = next;
		}
};
int main(){
	Node a(12);
	a.next = new Node(15);
	a.next->next = new Node(18);
	a.next->next->next = new Node(25);
	Node *temp = &a;
	for ( ; temp != nullptr ; temp = temp -> next)
		cout << temp -> val << ' ';
	cout << '\n';
	return 0;
}
	
	