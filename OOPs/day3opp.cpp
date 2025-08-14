#include <iostream>
using namespace std;

// class Animal
// {
//     public:
//     void speak()
//     {
//         cout << "Speaking" << endl;
//     }
// };

// class Dog : public Animal
// {
//     public:
//     //override
//     void speak()
//     {
//         cout << "Barking" << endl;
//     }
// };

class Animal
{
    public:
    
    virtual void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
    public:
    
    //overriding
    void speak()
    {
        cout << "Barking" << endl;
    }
};


int main()
{
    // Dog d;
    // d.speak();
    // Animal a;
    // a.speak();

    //dynamically
    // Animal* a = new Animal();
    // a->speak();

    // Dog* a = new Dog();
    // a->speak();

    //Upcasting
    Animal* a = new Dog();
    a->speak();
  

    //Downcasting
    // Dog* d = (Dog*)new Animal();
    // d -> speak();

    

    return 0;
}