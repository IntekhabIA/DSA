#include <iostream>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    cout << n << endl;
    return n*fact(n-1);
}

int power(int n){
    if(n == 1)
        return 2;

    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;
    return biggerProblem;
    
    // return 2 * power(n-1);
}

int main(){
    ///factorial
    /*
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n) << endl;
    */

    /// power 2
   /* int a;
    cin >> a;
    int ans = power(a);
    cout << "Power " << ans << endl;
    */

   int i =5;
   int *p =& i;
   cout << i << *p << endl;
   cout << " address of " << sizeof(i) << endl;
   cout << " address of " << sizeof(p) << endl;
    return 0;
}