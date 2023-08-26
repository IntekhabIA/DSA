/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void reverseItr(string &str, int start, int end){
    while (start <= end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseRE(string &str, int start, int end){
    //base case
    if(start >= end)
        return;
    
    //processing for one case
    swap(str[start], str[end]);
    
    //recursive function
    reverseRE(str, start+1, end-1);
}

int main()
{
    string str = "HelloWorld";
    // reverseItr(str, 0, str.size()-1);
    reverseRE(str, 0, str.size()-1);
    
    
    cout << str << endl;

    return 0;
}
