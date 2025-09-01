// lecture # 75
// While revision see last 20 minute lecture again
// Studied Virtual Function and Overriding Concept

#include <iostream>
#include <vector>
using namespace std;

// class ⬇️
class Animal
{
public:
    // virtual void speak() // here virtual will say to compiler please decide at runtime bro 😂
    // {
    //     cout << "Hu Hu" << endl;
    // }

    // pure virtual function 👇
    virtual void speak() = 0; // also known as Abstract Class,is class ka kabhi bhi koi object create nhi hoga
    // second thing : agar humne speak wala yhan bnaya hai to ye hr child me over write hona chahiye,otherwise error 😂
};

// class ⬇️
class Dog : public Animal // Inherited Animal
{
public:
    void speak()
    {
        cout << "Bark" << endl;
    }
};

// class ⬇️
class Cat : public Animal // Inherited Animal
{
public:
    void speak()
    {
        cout << "Meow" << endl;
    }
};

// main function
int main()
{
    // Animal *p;
    // p = new Dog();
    // p->speak();
    // instead of this 👆 code i can use this 👇 too
    // Dog d1;
    // d1.speak();
    // but why i created a parent class pointer and save child class address in it ???

    // lets understand by example 👇
    Animal *p; // parent class pointer can store child class address
    vector<Animal *> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    // animals.push_back(new Animal());  // cannot be created due to abstract function
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    // kaise pta chle ga konsa child hai aor awaz kesi hai
    // will not use if else 😂 let say we have 100 childs 😂
    for (int i = 0; i < animals.size(); i++)
    {
        p = animals[i];
        p->speak();
    }
};