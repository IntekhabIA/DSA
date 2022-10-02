#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Intekhab");
    s.push("Ahmad");
    s.push("Intekhab Ahmad");

    cout<<"Top Element ->"<<s.top()<<endl;

    s.pop();
    cout<<"Top Element after pop ->"<<s.top()<<endl;

    cout<<"size of Stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;

}