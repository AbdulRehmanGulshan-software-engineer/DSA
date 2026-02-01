#include <iostream>
#include "Point1.cpp"
using namespace std;

class Triangle{
		Point p1, p2, p3;
	public:
		Triangle():p1(2, 5), p2(1, 4), p3(3, 7){
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