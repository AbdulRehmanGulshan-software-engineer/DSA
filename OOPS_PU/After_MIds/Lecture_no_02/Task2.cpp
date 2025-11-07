#include <iostream>

using namespace std;

class A{
	int x;
  public:
	A(int x):x(x){}
	int getX() const{	return x;}
	void setX(int x) {	this->x = x ;}
};
class B{
	int y;
  public:
	B(int y):y(y){}
	int getY() const{	return y;}
	void setY(int y) {	this->y = y ;}
};
A& operator += (A& a, const B& b){
	a.setX(a.getX() + b.getY());
	return a;
}
int main(){
	A objA(4);	B objB(3);
	objA += objB;
	cout << objA.getX() << '\n';
	return 0;
}