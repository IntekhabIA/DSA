#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
int i=1;
int start = 1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<start<<" ";
        j++;
        start++;
    }
    cout<<endl;
    i++;
}
}