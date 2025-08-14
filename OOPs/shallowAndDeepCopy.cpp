#include <iostream>
using namespace std;

class Abc
{
    public:
    int x;
    int* y;

    Abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    //default dumb copy constructor
    Abc(const Abc &obj)
    {
        x = obj.x;
        y = obj.y;
    }

    // Deep Copy
    // Abc(const Abc &obj)
    // {
    //     x = obj.x;
    //     y = new int(*obj.y);
    // }

    void print() const
    {
        cout << "X :" << x << endl;
        cout << "Y pointer :" << y << endl;
        cout << "Value of Y :" << *y << endl;
    }

    ~Abc()
    {
        delete y;
    }
};

int main(){
    Abc* a = new Abc(1,2);
    a->print();
    Abc b = *a;
    delete a;

    b.print();

    // Shallow copy 
    // cout << "Object A: " << endl;
    // Abc a(23,45);
    // a.print();

    // cout << "Object B: " << endl;
    // Abc b = a;
    // b.print();
    

    // b.x = 100;
    // *b.y = 300;
    // cout << "Object a: ";
    // a.print();
    // cout << "Object b: ";
    // b.print();
    
    return 0;
}