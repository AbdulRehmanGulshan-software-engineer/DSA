#include <iostream>

using namespace std;

template <typename t>
t divide(t a, t b){
	return a/b;
}

class A{
	public:
		A operator / (A &obj){
			A temp;
			cout << "Something\n";
			return temp;
		}
		A operator + (const A &obj){
			return obj;
		}
		
};
ostream& operator << (ostream &out, A &obj){
	out << "Khwamkha\n";
	return out;
}

int main(){
	cout << divide (3, 4) << '\n';
	cout << divide (3.0, 4.0) << '\n';
	A a1, a2;
	a1 + (a1 + a2);
	return 0;
}