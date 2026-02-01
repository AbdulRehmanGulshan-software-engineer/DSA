#include <iostream>
#include "PointA.cpp"
using namespace std;

class Triangle{
		Point p1, p2, p3;
	public:
		Triangle(){
			cout << "Triangle Constructor\n";
		}
		~Triangle(){
			cout << "Triangle Destructor\n";
		}
};
int main(){
	Triangle t;
	return 0;
}