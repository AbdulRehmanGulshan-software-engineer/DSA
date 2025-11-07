// ⚠️ Dangling Pointer
// Pointer pointing to memory that is freed/deleted.
// Fix → set to nullptr after delete.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SEN -1

void show(int **p, const int ROWS, const int size[]){
	int i, j;
	for (i = 0 ; i < ROWS ; i++){
		for (j = 0 ; j < size[i] ; j++)
			cout << p[i][j] << ' ';
		cout << '\n';
	}
}
int main(){
	srand(time(0));
	int **x, rowsize, *size;
	int i, j;
	rowsize = rand() % 5 + 5;
	x = new int*[rowsize];
	size = new int[rowsize];
	for (i = 0 ; i < rowsize ; i++){
		size[i] = rand() % 20 + 10;
		x[i] = new int[size[i]];
		for (j = 0 ; j < size[i] ; j++)
			x[i][j] = rand() % 20;
	}
	show(x, rowsize, size);
	for (i = 0 ; i < rowsize ; i++)
		delete []x[i];
	delete []x;
	cout << "Program Successfully Completed\n";
	return 0;
}