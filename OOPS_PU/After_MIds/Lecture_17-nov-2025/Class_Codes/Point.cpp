#include <iostream>
using namespace std;

class point
{
	int x, y;

public:
	// constructor
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
		cout << "point constructor called" << endl;
	}

	// operator overloading
	/*
	Friend function class ka member nahi hota, isliye:
	❌ x directly access nahi kar sakta
	✔ ONLY via object → p.x
	*/
	friend ostream &operator<<(ostream &out, const point &p) // &p means by reference
	{
		out << p.x << '\t' << p.y << endl;
		return out;
	}

	// destructor
	~point()
	{
		cout << x << ' ' << y << " point destructor called" << endl;
	}
};

// int main()
// {
// 	point gulshan(3, 5);
// 	cout << gulshan;
// 	return 0;
// }
