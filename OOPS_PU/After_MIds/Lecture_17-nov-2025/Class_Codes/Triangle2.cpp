#include <iostream>
#include "Point2.cpp"
using namespace std;

class Triangle{
		Point p1, p2, p3;
	public:
		Triangle() : p1(2, 3), p2(4, 5), p3(1, 9){
		}
		Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
		 : p1(x1, y1), p2(x2, y2), p3(x3, y3){
		}
		friend ostream& operator << (ostream& out, const Triangle& t){
			out << t.p1 << t.p2 << t.p3;
			return out;
		}
};
int main(){
	Triangle t(1, 3, 2, 7, 4, 2);
	cout << t;
	return 0;
}