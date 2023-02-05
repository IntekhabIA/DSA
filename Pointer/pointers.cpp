#include <iostream>
using namespace std;

int main(){
    int num =5;
    cout << num << endl;

    //address of Operator - & 
    cout << " address of number is " << &num << endl;

    int *ptr = &num;

    cout << "value is : " << *ptr <<endl;
    cout << "address is : " << ptr << endl;

    double d = 2.3;
    double *p2 = &d;
    cout << " value is " << *p2 << endl;
    cout << " address is " << p2 << endl;

    cout << " size of integer is " << sizeof(num)<< endl;
    cout << " size of pointer is " << sizeof(p2) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    

    /// Null pointer
    int *p3 = 0;
    int num2 = 4;
    p3 = &num2;
    cout << "address of num2 " << p3 << endl;
    cout << "value of num2 " << *p3 << endl;


    ///incrementing the number using pointer
    int num4 = 6;
    int *p4 = &num4;
    cout<<p4<<endl;
    cout << " before " << num4 << endl;
    (*p4)++;
    cout << " after " << num4 << endl;
    
    /// copying a pointer 
    int num5 = 6;
    int *p5 = &num5;

    int *p5copy = p5;

    cout << p5 << " - " << p5copy << endl;
    cout << *p5 << " - " << *p5copy << endl;


    /// Important topic
    int i=3;
    int *pointer = &i;
    
    cout << pointer++ << endl;
    cout << pointer << endl;

    /// Playing with pointer
    int j=9, k=8;
    int *p = &j;
    (*p)++;
    cout << j << endl;
    *p = k;
    cout << *p << " " << j << " " << k << endl;

}