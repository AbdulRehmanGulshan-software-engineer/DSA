// Jagged Arrays + Sentinel Value + Pointers

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SEN -1

// Ye function basically jagged array print karta hai.
void show(int *p[], const int ROWS){
	int i, j;
	for (i = 0 ; i < ROWS ; i++){
		for (j = 0 ; p[i][j] != SEN ; j++)
			cout << p[i][j] << ' ';
		cout << '\n';
	}
}
int main(){
	srand(time(0));
	int *x[5];
	int i, j, SIZE;
	for (i = 0 ; i < 5 ; i++){
		SIZE = rand() % 20 + 10;           // rand() % (max - min + 1) + min;
		x[i] = new int[SIZE];
		for (j = 0 ; j < SIZE - 1 ; j++)
			x[i][j] = rand() % 20;
		x[i][j] = SEN;
	}
	show(x, 5);
	return 0;
}