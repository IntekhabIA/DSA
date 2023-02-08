#include <iostream>
using namespace std;

// int a=5;


void show(int& a){
    a++;
    cout << "Value of 'a' inside show " << a << endl;
    
}

int main(){
    int a=8;
    a++;
    cout << "Value of 'a' inside main " << a << endl;
    show(a);
    cout << "Value of 'a' inside main " << a << endl;

    return 0;
}