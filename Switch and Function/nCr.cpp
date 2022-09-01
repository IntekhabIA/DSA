#include <iostream>
using namespace std;

int factorial(int a){
    if(a==0)
        return 1;
    int ans=1;
    for(int i=1; i<=a; i++){
        ans = ans*i;
    }
    return ans;
}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    return (numerator/denominator);

}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<n<<"C" <<r<<" = "<<nCr(n,r)<<endl;
}