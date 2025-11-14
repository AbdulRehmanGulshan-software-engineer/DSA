#include <iostream>
#include <fstream>

using namespace std;

template <typename t>
t divide(t a, t b)
{
	return a / b;
}
template <typename t1, typename t2>
t1 divide(t1 a, t2 b)
{
	return a / b;
}
int main()
{
	cout << divide(3, 4) << '\n';
	cout << divide<int, int>(3, 4) << '\n'; // khud specify kr rhe hain,iski copy copmile code me bn jae gi

	cout << divide(3.0, 4) << '\n';
	cout << divide<int, float>(3.0, 4) << '\n';
	cout << divide<float, int>(3.0, 4) << '\n';
	return 0;
}