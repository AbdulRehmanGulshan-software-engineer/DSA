#include <iostream>
#include <cstdlib>
using namespace std;

class student
{
    string name;
    int age;

public:
    // constructor
    student()
    {
        name = "noname";
        age = 0;
    }
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // display function
    void whoareyou()
    {
        cout << "hi my name is " << name << " and my age is " << age << endl;
    }

    // new operator overloading
    void *operator new(size_t size)
    {
        void *pointer;
        cout << "overloaded new size is " << size << endl;
        pointer = malloc(size);
        if (!pointer)
        {
            bad_alloc ba;
            throw ba;
        }
        return pointer;
    }

    // delete operator overloading
    void operator delete(void *pointer)
    {
        cout << "deleted" << endl;
        free(pointer);
    }
};
int main()
{
    student *faizan;
    faizan = new student("Gulshan", 20);
    faizan->whoareyou();
    delete (faizan);
}