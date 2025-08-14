#include <iostream>
using namespace std;

// class Animal
// {
//     public:
//     int age;
//     int weight;

//     void eat()
//     {
//         cout << "Eating" << endl;
//     }
// };

// class Dog:public Animal
// {
//  public:
//  string type = "h";
// };

// class German:public Dog{

// };

// class Car
// {
//     public:
//     void speed()
//     {
//         cout << "Speeding up" << endl;
//     }
// };

// class Mahindra: public Car
// {
    
// };

// class Fortuner : public Car
// {
    
// };

class Maths
{
    public:

    int sum(int a, int b)
    {
        return a+b;
    }

    int sum(int a, int b, int c)
    {
        return a+b+c;
    }

    float sum(int a, float b)
    {
        return a+b;
    }
 
};

//Operator Overloading
class Param
{
    public:
    int val;

    void operator+(Param& obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value2-value1) << endl;
    }
};

int main()
{
    // Maths obj;
    // cout << obj.sum(1,3) << endl;
    // cout << obj.sum(3,2,1) << endl;
    // cout << obj.sum(3,5.12f) << endl;


    //Opeartor Overloading
    Param object1, object2;
    object1.val = 7;
    object2.val = 2;

    //This should print the difference between the two
    object1 + object2;
    cout << 6+4;
    return 0;
}