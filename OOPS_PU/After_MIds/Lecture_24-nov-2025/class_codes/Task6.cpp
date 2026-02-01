#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> mat = {{1, 2, 3},{4, 5, 6}};
    for(vector<int> &row : mat) {
        for(int x : row) 
			cout << x << ' ';
		cout << '\n';
    }
    cout << '\n';
    for(int i = 0 ; i < mat.size() ; i++) {
        for(int j = 0 ; j < mat[i].size() ; j++) 
			cout << mat[i][j] << ' ';
		cout << '\n';
	}    
    return 0;
}

