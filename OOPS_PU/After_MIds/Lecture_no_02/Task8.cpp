// Basic 2D Pointer Wala Concept
// int **arr;
// arr = new int*[rows]; // rows ka pointer array
// for (int i = 0; i < rows; i++)
//     arr[i] = new int[cols]; // har row me cols elements
// 👉 Ye rectangular (fixed) 2D array hota hai — sab rows ke columns same hote hain.




// Rows bhi flexible ho to double pointer

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define SEN -1

// Function for printing jagged array
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
		size[i] = rand() % 20 + 10;  // har row ke cols: 10–29 tak
		x[i] = new int[size[i]];	 // us row ke liye memory allocate
		for (j = 0 ; j < size[i] ; j++)
			x[i][j] = rand() % 20;	// random numbers fill
	}
	show(x, rowsize, size);
	return 0;
}