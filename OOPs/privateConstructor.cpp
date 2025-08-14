#include <iostream>
using namespace std;

class Box
{
    int width;
    //ctor
    Box(int _w) : width(_w){};

public:
    int getWidth() const
    {
        return width;
    }
    
    void setWidth(int _val) 
    {
        width = _val;
    }

    friend class BoxFactory;
};

class BoxFactory
{
    public:
    int count=0;
    Box getABox(int _w)
    {
        ++count;
        return Box(_w);
    }
};

int main()
{
    BoxFactory bfact;
    Box b = bfact.getABox(4); 
    cout << bfact.count << endl;
    cout << b.getWidth();
    return 0;
}