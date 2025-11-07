#include <iostream>

using namespace std;

class Point{
	int x, y;
  public:
	Point(int x, int y):x(x),y(y){}
	int getX() const{	return x;}
	int getY() const{	return y;}
};
ostream& operator << (ostream &out, const Point& p){
	out << p.getX()  << ' ' << p.getY() << '\n';
	return out;
}
int main(){
	Point p1(3, 5), p2(1, 4);
	cout << "P1:" << p1 << "P2:" <<p2;
	return 0;
}