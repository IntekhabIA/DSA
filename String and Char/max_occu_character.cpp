#include <iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        int number =0;
        //lower case
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{
            //upper case
            number = ch - 'A';
        }
        arr[number]++;
    }


    //find maximum 
    int maxi = -1;
    int ans = 0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }
    return ('a'+ans);
}

int main(){
    string s; 
    cout<<"Enter a string: "<<endl;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
}