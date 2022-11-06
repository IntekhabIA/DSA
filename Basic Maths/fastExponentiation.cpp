#include <iostream>
using namespace std;

int fastExponentiation(int x, int n){
    int res = 1;

    while(n>0){
        if(n&1){
            res = res * x;
        }
        x = x*x;
        n = n>>1;
    }
    return res;
}

int main(){
    int a, b ;
    cout<<" Enter number and its power "<<endl;
    cin>>a >> b;
    int res = fastExponentiation(a,b);
    cout<<a <<"^"<<b<<" = "<<res<<endl;
}