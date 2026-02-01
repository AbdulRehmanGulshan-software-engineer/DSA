#include <iostream>
#include "Circle.cpp"
using namespace std;

class Triangle{
		Point p1, p2, p3;
		Circle *c;
	public:
		Triangle() : p1(2, 3), p2(4, 5), p3(1, 9),c(nullptr){
		}
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
		 : p1(x1, y1), p2(x2, y2), p3(x3, y3),c(nullptr){
		 	//c = new Circle(0,0,6);
		}
		void assignCircle(Circle &c){
			this -> c = &c;
		}
		friend ostream& operator << (ostream& out, const Triangle& t){
			out << t.p1 << t.p2 << t.p3;
			if (t.c != 0)
				out << *(t.c);
			return out;
		}
		~Triangle(){
			//delete c;
		}
};
int main(){
	Triangle t(1, 3, 2, 7, 4, 2);
	Circle circle(2,2, 5);
	t.assignCircle(circle);
	cout << t;
	return 0;
}