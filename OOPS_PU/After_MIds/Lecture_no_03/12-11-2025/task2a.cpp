#include <iostream>
#include <fstream>

using namespace std;

template <typename t>
t divide(t a, t b)
{
	return a / b;
}
class A
{
public:
	A &operator/(A &obj)
	{
		// A c;
		cout << "Khawamkhwa\n";
		// return c;
		return obj;
	}
	friend ostream &operator<<(ostream &out,const A &obj)
	{
		out << "Something\n";
		return out;
	}
};
int main()
{
	cout << divide(3, 4) << '\n';
	cout << divide(3.0, 4.0) << '\n';
	A a1, a2;
	cout << divide(a1, a2) << '\n'; // need const on << operator

	// A res = divide (a1, a2);
	// cout << res << '\n';			// no need of const in this case

	return 0;
}