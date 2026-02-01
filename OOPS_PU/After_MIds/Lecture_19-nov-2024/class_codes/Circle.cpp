#include <iostream>
#include "Point.cpp"
using namespace std;

class Circle{
		Point center;
		int radius;
	public:
		Circle(int cx, int cy, int radius)
		 : center(cx, cy), radius(radius){
		 	cout << "Circle Created\n";
		}
		friend ostream& operator << (ostream& out, const Circle& c){
			out << "Center: " << c.center;
			out << "Radius: " << c.radius << '\n';
			return out;
		}
};
