#include <iostream>

using namespace std;

class Stack{
		int size, p;
		int *x;
	public:
		Stack(int s = 10){	
			size = s;
			p = 0;
			x = new int[size];
		}
		void push(int element){
			if (p < size)	x[p++] = element;
		}
		int top() const{
			return x[p-1];
		}
		void pop(){
			if (p > 0)	p--;
		}
		~Stack(){	delete[]x;			}
};
int main(){
	Stack stack;
	stack.push(35);
	stack.push(48);
	stack.push(18);
	stack.push(26);
	cout << stack.top() << '\n';
	stack.pop();
	cout << stack.top() << '\n';
	stack.push(100);	
	cout << stack.top() << '\n';
	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);
	stack.push(60);
	stack.push(70);
	stack.push(80);
	stack.push(90);
	cout << stack.top() << '\n';
	return 0;



}





class Point{
	int x, y;
	public:
		Point(int x = 0, int y = 0){
			this -> x = x;
			this -> y = y;
		}
		
		friend ostream& operator << (ostream& out, const Point&p){
			out << p.x << '\t' << p.y << '\n';
			return out;
		}
};
