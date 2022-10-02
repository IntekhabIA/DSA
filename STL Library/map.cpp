#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Intekhab";
    m[12] = "Ahmad";
    m[3] = "Intekhab Ahmad";

    m.insert({5,"Intelligent"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" : ";
        cout<<i.second<<endl;
    }cout<<endl;

    cout<<"Finding 12 :"<<m.count(12)<<endl;

    m.erase(12);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" : ";
        cout<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(1);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}