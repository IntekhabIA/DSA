#include <iostream>
#include <cmath>
using namespace std;

/* void sayDigit(int n, string arr[]){
    int digit;
    int ans = 0;
    int i=0;

    while(n!=0){
        digit = n % 10;
        n = n/10;
        ans = ans + (digit * pow(10,i));
        i++; 
    }
    cout << ans;
}
*/


void sayDigit(int n, string arr[]){
    if (n==0)
        return;
    
    //processing
    int digit = n % 10;
    n = n/10;
    // cout << arr[digit] << " ";

    sayDigit(n,arr);

    cout << arr[digit] << " ";
}

int main(){
    int n;
    string arr[10] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter a number" << endl;
    cin >> n;
    sayDigit(n,arr);



    return 0;
}