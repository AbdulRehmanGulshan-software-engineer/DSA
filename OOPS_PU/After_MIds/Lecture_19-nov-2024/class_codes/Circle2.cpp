#include <iostream>
#include "Point.cpp"
using namespace std;

class Circle{
		Point center;
		int radius;
	public:
		Circle(int cx, int cy, int radius)
		 : center(cx, cy), radius(radius){
		}
		void setCenter(int cx, int cy){
			center.set(cx, cy);
		}
		friend ostream& operator << (ostream& out, const Circle& c){
			out << "Center: " << c.center;
			out << "Radius: " << c.radius << '\n';
			return out;
		}
};
