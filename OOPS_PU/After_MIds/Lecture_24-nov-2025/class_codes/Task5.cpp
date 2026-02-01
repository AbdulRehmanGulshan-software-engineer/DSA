#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {9, 1, 7, 3, 5};
    for(int x : v) 
		cout << x << ' ';
	cout << '\n';
	sort(v.begin(), v.end());
    for(int x : v) 
		cout << x << ' ';
	cout << '\n';
	return 0;
}

