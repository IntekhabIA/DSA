#include <iostream>
using namespace std;

int main()
{
    int num = 3;
    switch (num)
    {
    case 1:
        cout << "first case" << endl;
        cout << "still first case" << endl;
        // break;

    case 2:
        cout << "Second case" << endl;
        cout << "Still inside the second case" << endl;
        // break;

    case 3:
        cout << "third case" << endl;
        // break;
        

    case 4:
        cout << "fourth case" << endl;
        // break;

    default:
        cout << "Inside the default" << endl;
        // break;
    }
    cout<<"outside the switch case"<<endl;

    return 0;
}