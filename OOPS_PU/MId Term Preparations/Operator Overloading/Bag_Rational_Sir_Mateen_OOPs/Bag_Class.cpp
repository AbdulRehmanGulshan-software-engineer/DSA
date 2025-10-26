#include <iostream>
using namespace std;

// creating bag class
class bag
{
    // private data members
    int size, csize; // size = total capacity , //csize = current elements count
    int *x;          // dynamic array pointer (store elements)

    // function to double the array size when it gets full
    void resize()
    {
        int *t = new int[size + size]; // create new array with double size
        for (int i = 0; i < size; i++)
            t[i] = x[i]; // copy old elements to new array
        delete[] x;      // free old memory
        x = t;           // point x to new array
        size += size;
    }

    // function to clear memory(used in assignment and destructor)
    void clear()
    {
        delete[] x;       // delete dynamic memory
        x = nullptr;      // make pointer safe
        csize = size = 0; // reset both to zero
    }

    // helper function for deep copy
    bag &copy(const bag &b)
    {
        x = new int[b.size]; // allocate new memory
        for (int i = 0; i < b.csize; i++)
            x[i] = b.x[i]; // copy data element by element
        size = b.size;     // copy total size
        csize = b.csize;   // copy used size
        return *this;      // return current object
    }

public:
    // constructor (default + parameterized)
    bag(int size = 10)
    {
        this->size = size; // set initial capacity
        csize = 0;         // no elements yet
        x = new int[size]; // create dynamic array
    }

    // copy constructor (called when (bag b2 = b1)  or  (bag res(b))   )
    bag(const bag &b)
    {
        copy(b); // deep copy of data
    }

    // assignment operator called when (b2 = b1) after creation
    bag &operator=(const bag &b)
    {
        clear(); // jo call kr rha hai jisme save krna new elements ko uska data remove kr do sirr
        return copy(b);
    }

    // += operator overloading -> insert new element
    bag &operator+=(int value)
    {
        if (csize == size)
            resize();             // agar array full hai to resize function ke pas chle ja bhaii
        this->x[csize++] = value; // insert value at end
        return *this;
    }

    // pre decrement operator
    bag &operator--()
    {
        if (csize > 0)
            csize--; // simply reduce element count
        return *this;
    }

    // ⚠️  sir mateen ka 23rd october ke message me +=operator 👇
    bag &operator+=(const bag &b)
    {
        for (int i = 0; i < b.csize; i++)
        {
            *this += b.x[i]; // use integer wala += for each element of b
        }
        return *this;
    }

    // ⚠️  sir mateen ka 23rd october ke message me +operator 👇
    bag operator+(const bag &b)
    {
        bag res(b); // copy constructor call
        for (int i = 0; i < csize; i++)
            res += x[i]; // use += operator already overloaded
        return res;
    }

    // ⚠️  sir mateen ka 23rd october ke message : == operator overloading 👇
    // maqsad : b1 == b2 return true if b1 and b2 has same elements in any order , where b1 and b2 are objects of bag class
    bool operator==(const bag &b) const
    {
        // mzedaar : agar size alag hai to directly false
        if (csize != b.csize)
            return false;

        // temporary array to track visited elements in b, acha shuru me sbko false rakh le bhai
        bool *matched = new bool[b.csize]{false};

        // har element of current bag ke liye check kar b ke andar milta hai ya nahi
        for (int i = 0; i < csize; i++)
        {
            bool found = false;
            for (int j = 0; j < b.csize; j++)
            {
                if (!matched[j] && x[i] == b.x[j])
                {
                    matched[j] = true; // mark element as used
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                delete[] matched;
                return false; // agar koi element nhi mila to
            }
        }
        delete[] matched;
        return true; // iska matlab gulshan sahib sb elements mil gae hain
    }

    // ⚠️  sir mateen ka 23rd october ke message : *= operator overloading 👇
    // b1 *= 2 duplicate all existing element in current object, if second operand is 3, add two copies of each existing element
    /*
    b1 = [2, 5]
    b1 *= 2   →   [2, 5, 2, 5]     // 1 extra copy (total 2 times)
    b1 *= 3   →   [2, 5, 2, 5, 2, 5]   // 2 extra copies (total 3 times)
    */
    // chal bhai ab operator overloading karte hain
    bag &operator*=(int value)
    {
        if (value <= 1)
            return *this; // agar 1 ya kam hai to kuch mat kar

        bag temp = *this;               // original elements save
        for (int i = 1; i < value; i++) // value-1 times add kar
            *this += temp;              // original copy ko add karte ja

        return *this;
    }

    // ⚠️  sir mateen ka 23rd october ke message : != operator overloading 👇
    // b1 != b2 return true if b1 and b2 has one or more elements different
    // chal bhai ab operator ko overload  krte hain,mujhe to ye == operator jesa lg rha bhai
    bool operator!=(const bag &b) const
    {
        return !(*this == b); // hum already == define kar chuke hain, to != ko usi ke opposite me likh do 👇
    }

    // ⚠️  sir mateen ka 23rd october ke message : ++ operator overloading 👇
    // ++b1 increment all existing elements by 1
    bag &operator++()
    {
        for (int i = 0; i < csize; i++)
        {
            x[i] += 1; // har element 1 se increment kar de bhai
        }
        return *this;
    }

    // 😂 gulshan jani bs last operator hai
    // ⚠️  sir mateen ka 23rd october ke message : -= operator overloading 👇
    // b1 –= 23 search 23 in current object, if found remove 23. Move values next to 23 on left side that is at 1 lower index, reduce current size by 1
    bag &operator-=(int value)
    {
        // element ko dhundhne ke liye loop
        for (int i = 0; i < csize; i++)
        {
            if (x[i] == value) // element mil gaya bhai
            {
                // baad ke elements ko left shift kar
                for (int j = i; j < csize - 1; j++)
                {
                    x[j] = x[j + 1];
                }

                csize--; // ek element kam ho gaya
                break;   // mil gaya, ab aur dhoondhne ki zarurat nahi
            }
        }
        return *this; // return current object taake chaining ho sake
    }

    // display function
    void show() const
    {
        for (int i = 0; i < csize; i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }

    // destructor → automatically called when object destroyed
    ~bag()
    {
        clear(); // free memory properly
    }
};

int main()
{
    // creating 2 objects of bag class
    bag b1, b2;
    // b1 object ki x[size] me += ka use kar ke 4 elements add kr rha hun
    b1 += 23;
    b1 += 5;
    b1 += 3;
    b1 += 2;

    // b1 object ki x[size] me += ka use kar ke 5 elements add kr rha hun
    b2 += 6;
    b2 += 5;
    b2 += 1;
    b2 += 1;
    b2 += 2;
    b2 += 4;

    (b1 + b2).show();  // sir ne apne message me galti se (b1+=b2).show likh diya hai
    (b1 += b2).show(); // sir ne += ka operator bhi overload karwaya hua hai

    b1.show();
    bag b3 = b1; // ye copy constructor call kre ga aor b3 me b1 ko copy kr de ga (deep copy)
    --b3;        // pre decrement wala csize ko km krta hai bhai apne operator overloading ke case me
    --b3;        // pre decrement wala csize ko km krta hai bhai apne operator overloading ke case me
    b3.show();
    b3 += 2;
    b3 += 2;
    b3.show();

    if (b1 == b2)
        cout << "B1 equal to B2\n";
    else
        cout << "B1 not equal to B2\n";

    if (b1 == b3)
        cout << "B1 equal to B3\n";
    else
        cout << "B1 not equal to B3\n";

    (b3 *= 3).show();

    (++b3).show();

    (b3 -= 23).show();
}