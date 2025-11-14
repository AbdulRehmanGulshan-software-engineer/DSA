#include <iostream>
#include <fstream>

using namespace std;

template <typename t>
t divide(t a, t b){
	return  a / b;
}
class A{
	public:
		A& operator / (A &obj){
			cout << "Khawamkhwa\n";
			return *this;
		}
		friend ostream& operator << (ostream &out, A &obj){
			out << "Something\n";
			return out;
		}
};
int main(){
	cout << divide (3, 4) << '\n';
	cout << divide (3.0, 4.0) << '\n';
	A a1, a2;
	divide (a1, a2);
	cout << a1 << '\n';
	return 0;
}