#include <iostream>

using namespace std;
	
int main(){
	int i, j, height = 3, width = 5;
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			cout << i * width + j << ' ' << j * height + height - i - 1 << '\n';


	return 0;
}
	
