#include <iostream>
using namespace std;

inline void show(int a)
{
    cout << a << endl;
    cout << a * 2 << endl;
    cout << a * 3 << endl;
}

int main(){
    show(3);
    return 0;
}