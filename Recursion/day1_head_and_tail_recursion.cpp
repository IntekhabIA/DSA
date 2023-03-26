#include <iostream>
using namespace std;


///Tail (n, n-1, ... 1)
void print(int n){
    if(n == 0)  // base condition
        return ;
    
    cout << n << endl; //processing

    print(n-1); // recurrence relation
}

///Head (1,2,3,....n)
void print2(int n){
    if(n==0)    // base condition
        return;
    
    print2(n-1); //recurrence relation

    cout << n << endl; //processing
}


int main(){
    int n;
    cout << "Enter value of n " <<endl;
    cin >> n;
    print(n);
    return 0;
}