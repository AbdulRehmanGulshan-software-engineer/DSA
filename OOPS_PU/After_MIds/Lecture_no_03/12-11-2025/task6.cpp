#include <iostream>
#include <fstream>

using namespace std;


template <typename t1, typename t2>
t1 divide(t1 a, t2 b){
	cout << "Printing result inside the function:" << a / b << '\n';
	return  a / b;
}

int main(){
	cout << divide (3, 4) << '\n';
	cout << divide (3.0, 4) << '\n';
	cout << divide (3, 4.0) << '\n';
	return 0;
}