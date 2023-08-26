#include <iostream>
using namespace std;

bool checkPalindromeRE(string &str, int start, int end){
    //base case
    if(start >= end){
        return 1;
    }

    //one case
    if(str[start] != str[end]){
        cout << "inside here" << endl;
        return 0;
    }
    return checkPalindromeRE(str, start+1, end-1);
}

int main(){
    string str = "abhcba";
    bool ans = checkPalindromeRE(str, 0, str.size()-1);
    cout << ans << endl;
    return 0;
}