#include <iostream>
#include "Circle.cpp"
using namespace std;

class Triangle{
		Point p1, p2, p3;
		Circle c;
	public:
		Triangle() : p1(2, 3), p2(4, 5), p3(1, 9), c(0,0,5){
		}
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
		 : p1(x1, y1), p2(x2, y2), p3(x3, y3), c(0, 0, 5){
		}
		friend ostream& operator << (ostream& out, const Triangle& t){
			out << t.p1 << t.p2 << t.p3;
			out << t.c;
			return out;
		}
		void scale(){
			p2.set(p2.getX() * 2, p2.getY() * 2);
			p3.set(p3.getX() * 2, p3.getY() * 2);
		}
};
int main(){
	Triangle t(1, 3, 2, 7, 4, 2);
	cout << t;
	return 0;
}