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
void printSubarraysSumK(Vector nums, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int count = nums.arr[i];
        for (int j = i + 1; j < n; j++)
        {
            count += nums.arr[j];
            if (count == k)
            {
                cout << "Subarray Found : []";
                for (int k = i; k <= j; k++)
                    cout << nums.arr[k] << " ";
                cout << "]" << endl;
            }
        }
    }
}
int main()
{
    int n;
    int inp;
    int target;
    cout << "Enter Size Of Array : ";
    cin >> n;
    cout << "Enter The target sum K : ";
    cin >> target;
    cout << "Enter Elements: ";
    Vector input;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        input.push_back(inp);
    }
    printSubarraysSumK(input, n, target);
}