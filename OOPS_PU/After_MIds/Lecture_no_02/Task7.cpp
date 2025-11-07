#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// instead of sentinal extra array le rhe jisme hr column ka size rKH RHE

void show(int *p[], const int ROWS, const int size[]){
	int i, j;
	for (i = 0 ; i < ROWS ; i++){
		for (j = 0 ; j < size[i] ; j++)
			cout << p[i][j] << ' ';
		cout << '\n';
	}
}
int main(){
	srand(time(0));
	int *x[5], size[5];
	int i, j;
	for (i = 0 ; i < 5 ; i++){
		size[i] = rand() % 20 + 10;
		x[i] = new int[size[i]];
		for (j = 0 ; j < size[i] ; j++)
			x[i][j] = rand() % 20;
	}
	show(x, 5, size);
	return 0;
}