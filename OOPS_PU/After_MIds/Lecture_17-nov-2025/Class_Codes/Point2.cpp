#include <iostream>
using namespace std;
class point
{
private:
	int x, y;

public:
	// constructor
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
		cout << "point object constructor called" << endl;
	};

	// friend function for operator overloading
	friend ostream &operator<<(ostream &out, const point &p)
	{
		out << p.x << ' ' << p.y << endl;
		return out;
	}

	// getter
	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}

	// member function
	void set(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	// destructor
	~point()
	{
		cout << x << ' ' << y << " point destructor called\n";
	}
};

// int main()
// {
// 	point gulshan(2, 7);
// 	int x = gulshan.getX();
// 	cout << x << endl;
// 	int y = gulshan.getY();
// 	cout << y << endl;
// 	gulshan.set(7, 2);
// 	return 0;
// }