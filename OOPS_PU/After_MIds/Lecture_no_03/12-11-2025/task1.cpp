#include <iostream>

using namespace std;

template <typename t>
t divide(t a, t b)
{
	return a / b;
}

int main()
{
	// cout << divide(3.45, 4) << '\n';		// error!
	cout << divide<int>(3.45, 4) << '\n'; // fix : make both similar e.g. <int>,<float>,<double>
	cout << divide<float>(3.0, 4.0) << '\n';
	return 0;
}