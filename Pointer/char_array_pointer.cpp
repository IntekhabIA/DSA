#include <iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    *p = *p + 1;
    // cout << "inside the update fun " << p << endl;
}

int getSum(int arr[], int n){
    cout << " Size of arr inside the fun " << sizeof(arr) << endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){

    // int arr[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout << arr << endl;
    // cout << ch << endl;

    // char *c = &ch[0];
    // //print the entire string
    // cout << c << endl;

    // char temp = 'z';
    // char *p = &temp;
    // cout << p << endl;

/// Funtions

    int value = 5;
    int *p = &value;
    print(p);

    cout << value << endl;
    // cout << "Before " << p << endl;
    update(p);
    // cout << "After " << p << endl;
    cout << value << endl;

/// Array
    int arr[5] = {1,2,3,4,5};
    cout << " Sum is " << getSum(arr+2,3) << endl;
    cout << " Size of arr in main() " << sizeof(arr) << endl;

    return 0;
}