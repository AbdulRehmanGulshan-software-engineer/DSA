#include <iostream>

using namespace std;

class Point{
		int x, y;
	public:
		Point(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		friend ostream& operator << (ostream &out, const Point& p){
			out << p.x << ':' << p.y << '\n';
			return out;
		}
		int getX() const{	return x; }
		int getY() const{	return y; }
		void set(int x, int y){
			this -> x = x;
			this -> y = y;
		}
		~Point(){
			cout << x << ' ' << y << " Point Destructor\n";
		}
};
