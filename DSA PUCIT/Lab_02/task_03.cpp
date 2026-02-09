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

// today's function
void findDuplicates(Vector nums, int n)
{
    // sorting
    int o, m;
    for (int i = 0; i < n; i++)
    {
        int min = nums.arr[i];
        for (o = i + 1; o < n; o++)
        {
            if (nums.arr[o] < min)
            {
                min = nums.arr[o];
                m = o;
            }
        }
        nums.arr[m] = nums.arr[i];
        nums.arr[i] = min;
    }
    nums.display(); // for testing
    // actual work here
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums.arr[j] == nums.arr[i])
                count++;
        }
        if (count == 2)
            cout << nums.arr[i] << " ";
    }
}

int main()
{
    int n, inp;
    cout << "Enter Size Of Array : ";
    cin >> n;
    Vector input;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        input.push_back(inp);
    }
    // cout << "Duplicate : ";
    findDuplicates(input, n);
}