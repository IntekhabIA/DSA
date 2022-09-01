#include <iostream>
using namespace std;

int main(){
    int num=2;
    while(1){
        switch (num)
        {
        case 1:
            cout<<"Num is "<<num<<endl;
            break;
        case 2:
        cout<<"num is "<<num<<endl;
        exit;
        break;
        
        
        default:
        cout<<"Default is called"<<endl;
            break;
        }
        // break;
    }

    cout<<"Outside the switch statement"<<endl;
}