#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
class Bird{
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    //classes that inherits this class has 
    //to implement pure virtual function.
};

class Sparrow: public Bird{
    private: 
    void eat()
    {
        std::cout << "Sparrow is Eating" << std::endl;
    }

    void fly()
    {
        std::cout << "Sparrow is Flying" << std::endl;
    }
};

class Eagle: public Bird{
    private: 
    void eat()
    {
        std::cout << "Eagle is Eating" << std::endl;
    }

    void fly()
    {
        std::cout << "Eagle is Flying" << std::endl;
    }
};


#endif // BIRD_H
