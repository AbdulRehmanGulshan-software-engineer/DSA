#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
	int x, y;

public:
	// constructor
	Point(int x = 0, int y = 0)
	{
		// this -> x = x;
		// this -> y = y;
		this->x = rand() % 100;
		this->y = rand() % 100;
		cout << this->x << ' ' << this->y << " Point Object\n";
	}

	// operator overloading
	friend ostream &operator<<(ostream &out, const Point &p)
	{
		out << p.x << '\t' << p.y << '\n';
		return out;
	}

	// destructor
	~Point()
	{
		cout << x << ' ' << y << " Point Destructor\n";
	}
};

// int main()
// {
// 	Point gulshan;
// 	return 0;
// }