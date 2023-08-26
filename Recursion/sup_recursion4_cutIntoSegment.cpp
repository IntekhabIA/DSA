#include <iostream>
#include <limits.h>
using namespace std;

int solve(int n, int x, int y, int z){
    //base case
    if(n == 0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    
    // int ans1 = INT_MIN;
    // if(n-x>=0){
    //     ans1 = solve(n-x, x, y, z)+1;
    // }
    // int ans2 = 0;
    // if(n-y>=0){
    //     ans2 = solve(n-y, x, y, z)+1;
    // }
    // int ans3 = INT_MIN;
    // if(n-z>=0){
    //     ans3 = solve(n-z, x, y, z)+1;
    // }

    // int ans = INT_MIN;
    // ans = max(ans1, max(ans2, ans3));
    // return ans;

    // New code
    int a = solve(n-x, x, y, z) + 1;
    int b = solve(n-y, x, y, z) + 1;
    int c = solve(n-z, x, y, z) + 1;

    int ans = max(a, max(b,c));
    return ans;
}

int main(){
    int n=9;
    int x=3, y=6, z=2;
    int ans = solve(n, x, y, z);
    cout << "Answer is: " << ans ;
    return 0;
}