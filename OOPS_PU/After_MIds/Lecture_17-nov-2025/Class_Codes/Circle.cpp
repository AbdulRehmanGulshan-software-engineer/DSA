// composition : sstrong aggregation

#include <iostream>
#include "Point2.cpp"
using namespace std;

class Circle
{
	point center;
	int radius;

public:
	Circle(int cx, int cy, int radius)
		: center(cx, cy), radius(radius)
	{
		cout << "Circle Constructor Called" << endl;
	}

	// operator overloading
	friend ostream &operator<<(ostream &out, const Circle &c)
	{
		out << "Center: " << c.center;
		out << "Radius: " << c.radius << '\n';
		return out;
	}

	// destructor
	~Circle()
	{
		cout << "Circle Destructor Called" << endl;
	}
};

// int main()
// {
// 	Circle gulshan(2, 3, 5);
// 	cout << gulshan;
// 	return 0;
// }
