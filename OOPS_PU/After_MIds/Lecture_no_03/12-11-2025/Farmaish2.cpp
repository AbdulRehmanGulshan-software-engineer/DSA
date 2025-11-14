#include <iostream>
#include <fstream>

using namespace std;

class A{
	public:
		A operator + (const A &obj){
			A temp;
			return temp;
		}
};
int main(){
	A a1, a2;
	a1 + (a1 + a2);
	return 0;
}