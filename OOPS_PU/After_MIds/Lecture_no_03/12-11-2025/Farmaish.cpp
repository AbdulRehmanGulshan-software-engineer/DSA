#include <iostream>
#include <fstream>

using namespace std;

class A{
	public:
		A operator / (A &obj){
			A c;
			cout << "Khawamkhwa\n";
			return c;
		}
		A operator + (A &obj){
			return *this;
		}
		friend ostream& operator << (ostream &out, A &obj){
			out << "Something\n";
			return out;
		}
};
int main(){
	A a1, a2;
	//A res = divide (a1, a2);
	cout <<  (a1 + a2) << '\n';
	return 0;
}