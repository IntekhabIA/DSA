#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i: l){
        cout<<i<<" ";
    }
    cout<<endl;
    // l.pop_front();
    // cout<<l.front();

    cout<<l.size()<<endl;

    list<int> n(5,100);
    for(int i: n){
      cout<<i<<" ";  
    }
    cout<<endl;

    list<int> copyN(n);

    for(int i:copyN){
        cout<<i<<" ";
    }
}