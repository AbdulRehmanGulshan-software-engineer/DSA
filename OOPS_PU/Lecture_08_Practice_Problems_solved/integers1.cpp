#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int x[] = {25,36,49,24,18,17,214,359,14526};
	ofstream out("nums.xyz",ios::binary);
	out.write((char*) x, sizeof(int) * 9);
	out.close();
	ifstream in("nums.xyz",ios::binary);
	in.seekg(sizeof(int) * 8);
	int temp;
	in.read((char*) &temp, sizeof(int));
	in.close();
	cout << "Temp = " << temp << '\n';
	return 0;
}