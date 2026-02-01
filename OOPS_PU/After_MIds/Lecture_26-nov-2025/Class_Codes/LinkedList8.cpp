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
class LinkedList{
	Node *start;
public:
	LinkedList(){	start = nullptr;	}
	void addNode(int val){
		start = new Node(val, start);
	}
	void deleteNode(){
		if (!start)	return;
		Node *temp = start;
		start = start -> next;
		delete temp;
	}
	void free(Node* t){
		if (!t)	return;
		free(t -> next);
		delete t;
	}
	void free(){
		free(start);
		start = nullptr;
	}
	~LinkedList(){
		free(start);
		cout << "I am dying happily\n";
	}
	friend ostream& operator << (ostream &out, const LinkedList &list){
		for (Node *temp = list.start ; temp != nullptr ; temp = temp -> next)
			out << temp -> val << ' ';
		out << '\n';
		return out;
	}
};
int main(){
	LinkedList list;
	list.addNode(50);
	list.addNode(49);
	list.addNode(48);
	list.addNode(47);
	list.addNode(46);
	cout << list;
	list.free();
	cout << "Pakistan Zindabad\n";
	return 0;
}
	
	