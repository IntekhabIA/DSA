#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //creation
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //remove 
    st.pop();

    //check element on top
    cout << "Element on top is: " << st.top() << endl;

    //size
    cout << "size: " << st.size() << endl;

    //stack is empty
    if (st.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";


    return 0;
}
