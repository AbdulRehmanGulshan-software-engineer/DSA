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
		cout << this->x << ' ' << this->y << " point object constructor called" << endl;
	}

	// operator overloading
	friend ostream &operator<<(ostream &out, const point &p)
	{
		out << p.x << ' ' << p.y << endl;
		return out;
	}

	// destructor
	~point()
	{
		cout << x << ' ' << y << " point object destructor called" << endl;
	}
};

int main()
{
	point gulshan(3, 4);
	cout << gulshan;
	return 0;
}