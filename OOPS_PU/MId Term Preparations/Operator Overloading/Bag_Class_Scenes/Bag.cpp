#include <iostream>
using namespace std;

class Bag
{
	int size, cSize; // size = total capacity, cSize = current elements count
	int *x;			 // dynamic array pointer (store elements)

	// function to double the array size when it's full
	void resize()
	{
		int *t = new int[size + size]; // create new array with double size
		for (int i = 0; i < size; i++)
			t[i] = x[i]; // copy old elements to new array
		delete[] x;		 // free old memory
		x = t;			 // point x to new array
		size += size;	 // update size (double it)
	}

	// function to clear memory (used in destructor and assignment)
	void clear()
	{
		delete[] x;		  // delete dynamic memory
		x = nullptr;	  // make pointer safe
		cSize = size = 0; // reset both to 0
	}

	// helper function for deep copy
	Bag &copy(const Bag &b)
	{
		x = new int[b.size]; // allocate new memory
		for (int i = 0; i < b.cSize; i++)
			x[i] = b.x[i]; // copy data element by element
		size = b.size;	   // copy total size
		cSize = b.cSize;   // copy used size
		return *this;	   // return current object
	}

public:
	// constructor (default + parameterized)
	Bag(int s = 10)
	{
		size = s;		   // set initial capacity
		cSize = 0;		   // no elements yet
		x = new int[size]; // create dynamic array
	}

	// copy constructor (called when Bag b2 = b1)
	Bag(const Bag &b)
	{
		copy(b); // deep copy of data
	}

	// assignment operator overloading (called when b2 = b1 after creation)
	Bag &operator=(const Bag &b)
	{
		clear();		// clear old data
		return copy(b); // deep copy from other object
	}

	// += operator overloading → insert new element
	Bag &operator+=(int value)
	{
		if (cSize == size)
			resize();			  // if array full → increase size
		this->x[cSize++] = value; // insert value at end
		return *this;			  // return current object (for chaining)
	}

	// ---------- Remove Last Element ----------
	Bag &operator-=(int value)
	{
		if (cSize == size)
			resize();
	}

	// display all elements
	void show() const
	{
		for (int i = 0; i < cSize; i++)
			cout << x[i] << ' ';
		cout << "\n";
	}

	// pre-decrement operator overloading (--b)
	Bag &operator--()
	{
		if (cSize > 0)
			cSize--;  // simply reduce element count
		return *this; // return current object
	}

	// destructor → automatically called when object destroyed
	~Bag()
	{
		clear(); // free memory properly
	}
};

int main()
{
	Bag b;	  // create Bag object (default size = 10)
	b += 12;  // add element 12
	b += 23;  // add element 23
	b += 2;	  // add element 2
	b += 45;  // add element 45
	b.show(); // show all elements → 12 23 2 45

	(--b).show(); // pre-decrement → remove last element → 12 23 2
	(--b).show(); // again remove last element → 12 23

	return 0;
}