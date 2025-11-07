#include <iostream>

using namespace std;

class A{
	int x;
  public:
	A(int x):x(x){}
	int getX() const{	return x;}
};
class B{
	int y;
  public:
	B(int y):y(y){}
	int getY() const{	return y;}
};
void operator + (const A& a, const B& b){
	cout << a.getX() + b.getY() << '\n';
}
int main(){
	A objA(4);	B objB(3);
	objA + objB;
	return 0;
}