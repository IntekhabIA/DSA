#include <iostream>
using namespace std;

class Abc
{
    public:
        static int x,y;

        static void print()
        {
            //static
            //no this pointer common to all the intances of the class
            cout << x << " " << y << endl;
        }
};

int Abc::x;
int Abc::y;

int main()
{
    Abc obj1;
    Abc::x = 1;
    Abc::y = 2;
    Abc::print();
    Abc obj2;
    Abc::x = 10;
    Abc::y = 20;
    Abc::print();
    Abc::print();
    
    return 0;
}