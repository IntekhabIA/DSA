#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string removeRedundantParentheses(string expr) {
    int n = expr.size();
    stack<int> st;
    bool remove[1000] = {false}; // assuming max length = 1000

    for (int i = 0; i < n; i++) {
        if (expr[i] == '(') {
            st.push(i);
        } 
        else if (expr[i] == ')') {
            int openIndex = st.top();
            st.pop();

            bool hasOperator = false;
            for (int j = openIndex + 1; j < i; j++) {
                if (isOperator(expr[j])) {
                    hasOperator = true;
                    break;
                }
            }

            // If no operator inside, mark redundant
            if (!hasOperator) {
                remove[openIndex] = true;
                remove[i] = true;
            }
        }
    }

    // build result string
    string result;
    for (int i = 0; i < n; i++) {
        if (!remove[i]) result += expr[i];
    }

    return result;
}

int main() {
    string expr;
    cout << "Enter expression: ";
    getline(cin, expr);

    cout << "Without redundant brackets: " 
         << removeRedundantParentheses(expr) << endl;

    return 0;
}
