#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}


bool checkPalindrome(char ch[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(ch[s]) != toLowerCase(ch[e]) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char ch[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(ch[s++], ch[e--]);
    }
}

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<name<<endl;

    int len = getLength(name);
    cout<< len <<endl;

    reverse(name, len);
    cout<<name<<endl;

    cout <<"Check Palindrome "<<checkPalindrome(name, len)<<endl;

    cout<<toLowerCase('B');
}