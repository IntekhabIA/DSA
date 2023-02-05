#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,5,7,9};

    cout << "address of first memory block is " << arr << endl;
    cout << "2nd " << arr[0] << endl;
    cout << "address of first memory block is " << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << *(arr + 2) << endl;
    cout << "9th " << arr[2] << endl;
    cout << "10th " << 2[arr] << endl;


    /// Playing with array and pointer
    int temp[10] = {1,3};
    int *ptr = &temp[0];
    cout << temp << endl;
    cout << ptr << endl;
    
    cout << &temp << endl;
    cout << &temp[0] << endl;

    //increment 
    // temp = temp +1; //this gives error
    ptr = ptr + 1;
    cout << ptr << endl;


    return 0;
}