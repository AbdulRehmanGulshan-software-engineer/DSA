// vector class implementation
#include <bits/stdc++.h>
using namespace std;
class Vector
{
    // data members
public:
    int *arr;
    int size;
    int capacity;
    // operations
    Vector() // constructor
    {
        // create empty vector
        arr = new int[2]; // capacity 2 here
        capacity = 2;
        size = 0;
    };
    void push_back(int x)
    {
        if (size < capacity)
            arr[size++] = x;
        else
        {
            expand();
            arr[size++] = x;
        }
    }
    void pop_back()
    {
        size--;
    }
    int get(int i)
    {
        return arr[i];
    }
    void set(int i, int x)
    {
        arr[i] = x;
    }
    int returnSize()
    {
        return size;
    }
    bool isEmpty()
    {
        if (size == 0)
            return 1;
        else
            return 0;
    }
    int minElement()
    {
        int minimum = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] < minimum)
                minimum = arr[i];
        return minimum;
    }
    int maxElement()
    {
        int maximum = arr[0];
        for (int i = 1; i < size; i++)
            if (arr[i] > maximum)
                maximum = arr[i];
        return maximum;
    }
    void display()
    {
        // for (int x : arr)
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    void expand()
    {
        int *prr;
        if (size == capacity)
            prr = new int[capacity * 2];
        int i;
        for (i = 0; i < size; i++)
            prr[i] = arr[i];
        this->arr = prr;
        capacity = capacity * 2;
    }
};
int main()
{
    Vector v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(30);
    v.push_back(2);
    cout << "Vector elements: ";
    v.display();
    cout << "Size: " << v.returnSize() << endl;
    cout << "Is Empty : " << v.isEmpty() << endl;
    cout << "Element at index 2 :" << v.get(2) << endl;
    v.set(1, 15);
    cout << "After set Operation: ";
    v.display();
    cout << "Minimum Element : " << v.minElement() << endl;
    cout << "Maximum Element : " << v.maxElement() << endl;
    v.pop_back();
    cout << "After pop_back: ";
    v.display();
    return 0;
}