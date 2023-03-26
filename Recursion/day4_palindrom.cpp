#include <iostream>
using namespace std;

bool checkPalindrome(string word, int i , int j){
    if(i>j){
        return true;
    }

    if(word[i] != word[j]){
        return false;
    }

    return checkPalindrome(word, i+1, j-1);
}

int main(){
    string word = "IntekhabbahketnI";
    bool ans = checkPalindrome(word, 0, word.length()-1);
    if(ans){
        cout << word << " is palindrome " << endl;
    }
    else{
        cout << word << " is not palindrome " << endl;
    }
    return 0;
}