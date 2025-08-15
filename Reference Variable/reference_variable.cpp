#include <iostream> 
using namespace std;

void update1(int n){
    n++;
}

void update2(int &n){
    n++;
}

int func(int a){
    int num = a;
    int& ans = num;
    return ans; 
}

// int* fun(int n){
//  int i=n;
//  int *p = &n;
//  return p;   
// }

int main(){
    /*
    int i = 5;
    
    //creating a ref variable
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */
    int n=5;
    cout << " Before " << endl;
    cout << n << endl;
    update2(n);
    cout << " After " << endl;
    cout << n << endl;
    // func(n);
    cout << n;

    return 0;
}