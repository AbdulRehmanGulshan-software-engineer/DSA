#include <iostream>
using namespace std;

template <typename T>
class myVector
{
    // data members
    T *data;
    int size, capacity;

    void reallocate(int newCap)
    {
        T *temp = new T[newCap];
        for (int i = 0; i < size; i++)
            temp[i] = this->data[i];

        delete[] data;
        data = temp;
        capacity = newCap;
    }

public:
    // Default Constructor
    myVector()
        : size(0), capacity(2), data(new T(capacity)) {}

    // parameterized constructor
    myVector(int cap)
        : size(0), capacity(cap), data(new T[capacity]) {}

    // copy constructor
    myVector(const myVector &other)
        : size(other.size), capacity(other.capacity), data(new T[capacity])
    {
        for (int i = 0; i < size; i++)
            data[i] = other.data[i];
    }

    // Assignment Operator
    myVector &operator=(const myVector &other)
    {
        if (this != &other)
        {
            delete[] data; // can use copy constructor ?
            size = other.size;
            capacity = other.capacity;
            data = new T[capacity];

            for (int i = 0; i < size; i++)
                data[i] = other.data[i];
        }
        return *this;
    }

    // push_back
    void push_back(T value)
    {
        if (size == capacity)
            reallocate(capacity * 2);
        data[size++] = value;
    }

    // pop_back
    void pop_back(T value)
    {
        if (size > 0)
            size--;
    }

    // insert at index
    void insert(int index, T value)
    {
        if (index < 0 || index > size)
        {
            cout << "index > size " << endl;
            return;
        }
        if (size == capacity)
            reallocate(capacity * 2);
        for (int i = size; i > index; i--)
            data[i] = data[i - 1];
        data[index] = value;
        size++;
    }

    // erase at index
    void erase(int index)
    {
        if (index < 0 || index > size)
        {
            return;
            cout << "index > size " << endl;
        }
        for (int i = index; i < size - 1; i++)
            data[i] = data[i + 1];
        size--;
    }

    // clear
    void clear()
    {
        size = 0;
    }

    // resize
    void resize(int newSize)
    {
        if (newSize > resize)
            reallocate(newSize);
        size = newSize;
    }

    // size
    int _size() const
    {
        return size;
    }

    // capacity
    int _capacity() const
    {
        return capacity;
    }

    // empity
    bool empty() const
    {
        return size == 0;
    }

    // operator []
    T &operator[](int index)
    {
        return data[index];
    }

    // at()
    T at(int index) const
    {
        if (index < 0 || index > size)
        {
            cout << " Index Out Of Range" << endl;
            exit(0);
        }
        return data[index];
    }

    // front
    T front() const
    {
        return data[0];
    }

    // back
    T back() const
    {
        return data[size - 1];
    }

    // display
    void display()
    {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
        cout << endl;
    }

    // Destructor
    ~myVector()
    {
        delete[] data;
    }
};
int main()
{
    myVector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.display();

    v.insert(0, 99);
    v.display();

    v.erase(2);
    v.display();

    v.insert(0, 99);
    v.display();

    v.insert(0, 99); // capacity will double here
    v.display();

    cout << "\nsize: " << v._size();
    cout << "\ncapacity: " << v._capacity();
    cout << "\nFront: " << v.front();
    cout << "\nBack: " << v.back();

    return 0;
}