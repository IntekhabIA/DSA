#include <iostream>
using namespace std;



class Abc
{
    int x;
    // int *y;
    int* y;

public:
    // Abc()
    // {
    //     x = 0;
    //     y = new int(0);
    // }

//Inline Function : Its just a new way of writing a constructor    
    Abc(int _x, int _y ): x(_x), y(new int(_y)){}

    int getX() 
    {
        return x;
    }

    void setX(int _val)
    {
        x = _val;
    }

    int getY()
    {
        return *y;
    
    }
    void setY(int _val)
    {
        *y = _val;
        
    }
};

 void printAbc(Abc &a)
    {
        cout << "Inside the function" << endl;
        cout << a.getX() << " " << a.getY() << endl;
    }

int main(){
    // cout << "Hello" << endl;
    // // Abc obj;
    // cout << "Hello2" << endl;
    // Abc b(90,80);
    // cout << "Hello3" << endl;
    // printAbc(b);
    // // printAbc(obj);
    // // printAbc(b);
    cout << "Hi" << endl;
    Abc a(80,90);
    cout << "Hello" << endl; 
    printAbc(a);
    // printAbc(a);


    return 0;
}

// int main2(){
    
    // const int* a = new int(2);
    // int const *a = new int(2); 
    // cout << *a << endl;
    // int b = 5;
    // a =& b;
    // cout << *a << endl;

    // int *const a = new int(2);
    // cout << *a << endl;
    // int b = 5;
    // *a = b;
    // cout << *a << endl;
    // a = &b;
    // cout << *a << endl;

    // return 0;
// }