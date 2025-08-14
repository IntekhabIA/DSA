#include <iostream>
using namespace std;

#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

double areaOfCircle(int radius)
{
    return PI * radius * radius;
}

double findMax(double a, double b)
{
    return MAXX(a,b);
}

int main(){
    cout << areaOfCircle(3) << endl;
    cout << findMax(3.7,3.75) << endl;
    return 0;
}