#include <iostream>
#include <fstream>

using namespace std;

template <typename t>
t divide(t a, t b)
{
	return a / b;
}
int main()
{
	cout << divide(3, 4) << '\n';
	// cout << divide (3.0, 4) << '\n';	//Error!
	cout << divide(3.0, 4) << '\n'; // Fix , make both of same type
	return 0;
}