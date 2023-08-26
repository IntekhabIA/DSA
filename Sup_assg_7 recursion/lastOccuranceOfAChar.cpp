#include <iostream>
#include <string>
using namespace std;

///iterative
int findLastOccr(string str, char ch){
    for(int i = str.size()-1; i >= 0 ; i--){
        if(str[i] == ch ){
            return i;
        }
    }
    return -1;
}

///recursive LTR
void lastOccu(string str,int i, char ch, int &ans){
    //base case
    if(i>=str.size())
        return;
    
    if(str[i] == ch)
        ans = i;
    
    return lastOccu(str, i+1, ch, ans);
}

///recursive RTL

void lastOccRightToLeft(string str,int i, char ch, int &ans){
    //base case
    if(i<0)
    return;
    
    if(str[i] == ch){
        ans = i;
        return;
    }
    
    return lastOccRightToLeft(str, i-1, ch, ans);
}

int main(){
    string str = "zaabbccddabcd";
    char ch = 'd';
    int i = 0;
    int j = str.size() - 1;
    int ans = -1;
    // lastOccu(str, i, ch, ans);
    lastOccRightToLeft(str, j, ch, ans);
    
    cout << "Answer is :" << ans;
    
    return 0;
}