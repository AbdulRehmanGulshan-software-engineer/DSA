#include <iostream>
using namespace std;

class bag
{
    int size, csize;
    int *x;
    // resize dynamic array function
    void resize()
    {
        int *t = new int[size + size];
        for (int i = 0; i < size; i++)
            t[i] = x[i];
        delete[] x;
        x = t;
        size += size;
    }
    void clear()
    {
        delete[] x;
        x = nullptr;
        csize = size = 0;
    }
    bag &copy(const bag &b)
    {
        x = new int[b.size];
        for (int i = 0; i < b.csize; i++)
            x[i] = b.x[i];
        size = b.size;
        csize = b.csize;
    }
    bag &operator+=(int x)
    {
        if (csize == size)
            resize();
        this->x[csize++] = x;
        return *this;
    }
};

int main()
{
    return 0;
}