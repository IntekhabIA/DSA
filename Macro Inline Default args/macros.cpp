#include <iostream>
using namespace std;

//1st macro
#define PI 3.14

//2nd macro
#define AREA(l,b) (l*b)

//3rd macro - Chain macro(type 1)
#define VEHICLES CARS
#define CARS "Mercedes"

//4th macro - object like macro(type 2)
#define DATE 15

//5th macro - function like macro(type 3)
#define PI 3.14
#define MAX(p,q) (p>q ? p : q)

//6th macro - Multi - line macros(type 4)
#define TABLE 2,\
4,\
5,\

int main(){
    //first macro call
    cout << "The value of PI is " << PI << endl;

    //2nd macro call
    int l=5, b=4;
    cout << " Area is " << AREA(l,b) << endl;

    //3rd macro call
    cout << "Car Name : " << VEHICLES << endl;

    //4th macro call
    cout << " The last date of submission is " << DATE << endl;

    //5th macro call
    int m=5, n=8;
    cout << "Max between m and n " << MAX(m,n) << endl;

    //6th macro call
    int arr[] = {TABLE};
    for(int i:arr){
        cout << " array elements " << i << endl;
    }



    return 0;
}