#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(5);		
    v.push_back(10);
    v.push_back(15);
	cout << "Size: " << v.size() << '\n';
    for(int x : v)			//extended for loop on vector, give readonly access
        cout << x << ' ';
    cout << '\n';
    v.pop_back();
    for(int x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}
/*	The push_back() function in C++ is a member function of the std::vector container, used to add a new element to the end of the vector.
Functionality:
    It appends a copy (or moves the content) of the provided value to the end of the existing elements in the vector.
    This increases the size of the vector by one.
    If the vector's current capacity is insufficient to accommodate the new element, push_back() will automatically reallocate memory. 
	This typically involves creating a new, larger block of memory, copying all existing elements to the new location, and then adding the new element.

pop_back() is a member function of the std::vector container in C++. It performs the following actions:
    Removes the last element: It effectively removes the element currently located at the end of the vector.
    Reduces size: The size of the vector is reduced by one.
    Destroys the element: The destructor of the removed element is called.
    Constant time complexity: The operation has a constant time complexity, O(1), meaning its execution time does not depend on the number of elements in the vector.
    Capacity remains: While pop_back() reduces the size, it generally does not reduce the allocated memory capacity of the vector.
*/
