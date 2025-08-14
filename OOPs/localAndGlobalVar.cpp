#include <iostream>
using namespace std;

int x = 5;

int main()
{
    cout << x << endl;
    int x = 10;
    cout << x << endl;
    {
        int x = 20;
        cout << x << endl;
        cout << ::x << endl;
    }

    return 0;
}