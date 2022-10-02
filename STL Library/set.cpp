#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(8);
    s.insert(9); 
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for(int i: s){
        cout<<i<<endl;
    }cout<<endl;


    set<int>::iterator it = s.begin();
    it=it++;

    s.erase(it);

    for(auto i: s){
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<"5 is present or not -> "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(4);
    // cout<< *itr;
    for(auto it = itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    
}