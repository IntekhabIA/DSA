#include <iostream>
using namespace std;

inline int max(int a, int b){
    return (a>b) ? a : b;
}

int main(){
    int a =9, b=5;

    cout << " Max number is " << max(a,b) << endl;

    return 0;
}