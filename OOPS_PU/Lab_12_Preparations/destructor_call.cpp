class Base{
public:
    ~Base(){ cout << "Base dtor\n"; }
};

class Derived : public Base{
public:
    ~Derived(){ cout << "Derived dtor\n"; }
};

Base* p = new Derived;
delete p;
// prints: Base dtor (Derived dtor missing!)
