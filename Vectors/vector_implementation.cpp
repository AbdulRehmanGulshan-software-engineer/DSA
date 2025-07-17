#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // declare vector
    vector<int> v;

    // size and capacity
    cout << "Size of v : " << v.size() << endl;
    cout << "Size of v : " << v.capacity() << endl;

    // insert element
    v.push_back(2); // value at 0th index
    cout << "Size of v : " << v.size() << endl;
    cout << "capacity of v : " << v.capacity() << endl;
    v.push_back(5); // value at 1st index
    cout << "Size of v : " << v.size() << endl;
    cout << "capacity of v : " << v.capacity() << endl;
    v.push_back(7); // value at 2nd index
    cout << "Size of v : " << v.size() << endl;
    cout << "capacity of v : " << v.capacity() << endl;

    // update value
    v[1] = 5; // updated 1st index value

    // initialize vector
    vector<int> v1(5, 1); // 5 elements initialized with 1
    cout << "Size of v1 : " << v1.size() << endl;
    cout << "capacity of v1 : " << v1.capacity() << endl;
    v1.push_back(4);
    cout << "after push back" << endl;
    cout << "Size of v1 : " << v1.size() << endl;
    cout << "capacity of v1 : " << v1.capacity() << endl;

    // initialization
    vector<int> v2 = {1, 2, 3, 4, 5};
    cout << "size of v2 : " << v2.size() << endl;

    // delete value from vector
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(4);
    v3.push_back(7);
    v3.push_back(1);
    v3.push_back(6);
    cout << "size of v3 : " << v3.size() << endl;
    cout << "capacity of v3 : " << v3.capacity() << endl;
    v3.pop_back();
    cout << "after pop back \nsize : " << v3.size() << endl;
    cout << "capacity : " << v3.capacity() << endl;

    v3.erase(v3.begin() + 1); // erase 1st index value
    cout << "after erase element value \nsize : " << v3.size() << endl;
    cout << "capacity : " << v3.capacity() << endl;

    // print values
    cout << "printed v3 : ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    // insert
    v3.insert(v3.begin() + 1, 50); // insert value at particular index
    // print values
    cout << "\nprinted v3 after insertion : ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    // update inserted
    v3[1] = 37;
    // print values
    cout << "\nprinted v3 updated inserted : ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";

    // remove all elements of vector
    v3.clear(); // remove all the elements
    cout << "after v3.clear() \nsize : " << v3.size() << endl;
    cout << "capacity : " << v3.capacity() << endl;

    // print first element
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(122);
    cout << arr[0] << endl;
    cout << arr.front() << endl;
    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;

    vector<int> vnew;
    // copy value of one vector to another
    vnew = arr;
    // print values
    cout << "\nprinted vnew : ";
    for (int i = 0; i < vnew.size(); i++)
        cout << vnew[i] << " ";

    // second method of printing
    cout << endl;
    for (auto i : arr)
        cout << i << " ";

    // printing third method
    cout << endl;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }

    // sort array
    // sort in increasing order
    sort(arr.begin(), arr.end());
    // print
    cout << endl;
    for (auto i : arr)
        cout << i << " ";

    // sort in decreasing order
    sort(arr.begin(), arr.end(), greater<int>());
    // print
    cout << endl;
    for (auto i : arr)
        cout << i << " ";

    // sort in decreasing second method
    sort(arr.rbegin(), arr.rend());
    // print
    cout << endl;
    for (auto i : arr)
        cout << i << " ";

    // search in binary search
    cout << endl;
    cout << binary_search(vnew.begin(), vnew.end(), 122) << endl;
    cout << binary_search(vnew.begin(), vnew.end(), 54) << endl;

    // find index
    cout << endl;
    cout << "index of 3 : " << find(arr.begin(), arr.end(), 3) - arr.begin() << endl;

    // testing new operartions on new vector
    vector<int> gulshan;
    gulshan.push_back(7);
    gulshan.push_back(2);
    gulshan.push_back(5);
    gulshan.push_back(1);
    gulshan.push_back(9);
    gulshan.push_back(0);
    gulshan.push_back(5);
    gulshan.push_back(2);

    // sort increasing
    sort(gulshan.begin(), gulshan.end());
    // print
    cout << endl;
    for (auto i : gulshan)
        cout << i << " ";

    // sort decreasing
    // sort(gulshan.begin(), gulshan.end(), greater<int>());
    // print
    cout << endl;
    for (auto i : gulshan)
        cout << i << " ";

    // count
    cout << endl;
    int amount = count(gulshan.begin(), gulshan.end(), 2);
    cout << "2 is present : " << amount << " times" << endl;

    // Max or Min
    int maximium = *max_element(gulshan.begin(), gulshan.end());
    cout << "maximum element is : " << maximium << endl;
    int minimum = *min_element(gulshan.begin(), gulshan.end());
    cout << "minimum element is : " << minimum << endl;

    // lower bound
    cout << "upper bound of 2 is : " << *upper_bound(gulshan.begin(), gulshan.end(), 2) << endl;

    // lower bound
    cout << "lower bound of 2 is : " << *lower_bound(gulshan.begin(), gulshan.end(), 2) << endl;

    // search
    cout << binary_search(gulshan.begin(), gulshan.end(), 5) << endl;

    int it = *find(gulshan.begin(), gulshan.end(), 2); // first occurance
    cout << it << endl;

    auto ite = find(gulshan.begin(), gulshan.end(), 2); // first occurance
    cout << *ite << endl;
}
