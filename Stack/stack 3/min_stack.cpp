#include<iostream>
#include<vector>

using namespace std;

class Minstack{
    public:
        vector<pair<int,int>> st;

    void push(int val){
        pair<int,int> p;
        if(st.empty()){
            p = make_pair(val, val);
            st.push_back(p);
        }
        else{
            p.first = val;
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }

    void pop(){
        st.pop_back();
    }

    int top(){
        return st.back().first;
    }

    int getMin(){
        return st.back().second;
    }

    bool isEmpty(){
        if(st.empty())
            return 1;
        else
            return 0;
    }
};

int main(){
    Minstack s;
    s.push(4);
    s.push(5);
    s.push(100);
    s.push(1);
    s.push(99);

    while(!s.isEmpty()){
        cout << s.top() << "-";
        cout << s.getMin() << "  ";

        s.pop();
    }
    return 0;
}