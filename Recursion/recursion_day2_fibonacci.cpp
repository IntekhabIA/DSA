#include <iostream>
using namespace std;

int findFibonacci(int n){
    int a = 0;
    int b = 1;
    // int temp;
    int ans;
    if ( n==0 || n==1){
        return n;
    }

    for(int i=2; i<=n; i++){
        ans = a + b;
        
        a = b;
        b = ans;
    }
    return ans;
}

 int fib(int n) {
        if(n == 0)
            return 0;
        
        if(n == 1)
            return 1;

        return fib(n-1) + fib(n-2);
    }

int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int ans = findFibonacci(n);
    cout << ans << endl;


    // Recursive call 
    int answer = fib(n);
    cout << "Fibonacci recursive answer " << answer << endl;
    return 0;
}