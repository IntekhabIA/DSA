#include <iostream>
using namespace std;

string reverse(string &word, int i, int j){
    // cout << "Call recieved for " << word << endl; 
    //base case
    if(i > j)
        return word;
    swap(word[i],word[j]);
    // i++; 
    // j--;
    return reverse(word, i+1, j-1);
    
}

int main(){
    string word = "abcde";
    // reverse(word,0,word.length()-1);

    string ans = reverse(word,0,word.length()-1);
    cout << "Ans is " << ans << endl;

    // cout << word << endl;
    
    
    return 0;
}