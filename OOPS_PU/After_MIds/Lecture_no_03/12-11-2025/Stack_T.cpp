#include <iostream>

using namespace std;

template <class T>
class Stack{
		int size, p;
		T *x;
	public:
		Stack(int s = 10){	
			size = s;
			p = 0;
			x = new T[size];
		}
		void push(T element){
			if (p < size)	x[p++] = element;
		}
		T top() const{
			return x[p-1];
		}
		void pop(){
			if (p > 0)	p--;
		}
		~Stack(){	delete[]x;			}
};
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

int main(){
	Stack<int> stack;
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
	Stack<Point> stackP;
	stackP.push(Point(3,4));
	stackP.push(Point(2,1));
	stackP.push(Point(3,7));
	stackP.push(Point(6,4));
	cout << stackP.top() << '\n';
	stackP.pop();
	cout << stackP.top() << '\n';
	return 0;
}





