#include <iostream>
#include <stack>

using namespace std;

class Solution {
    public: 
        bool isValid(string s) {
            stack<char> st;

            for (int i=0; i<s.length(); i++){
                char ch = s[i];

                //opening bracket
                if(ch == '(' || ch == '{' || ch == '['){
                    st.push(ch);
                }
                else {
                    //closing bracket - ch
                    if(!st.empty()){
                        char topCh = st.top();
                        if(ch == ')' && topCh == '('){
                            //matching brackets
                            st.pop();
                        }
                        else if(ch == '}' && topCh == '{'){
                            //matching brackets
                            st.pop();
                        }
                        else if(ch == ']' && topCh == '['){
                            //matching brackets
                            st.pop();
                        }
                        else {
                            return false;
                        }

                    }
                    else {
                        //bracket not matching
                        return false;
                    }
                }

                if(st.empty()){
                    //valid
                    return true;
                }
                else {
                    return false;
                }

            }
        }
};

int main(){
    string s = "{{[]}}";
    Solution sol;
    
    if(sol.isValid(s))
        cout << s << " is valid " << endl;
    else
        cout << s << " is invalid " << endl;
        return 0;
}