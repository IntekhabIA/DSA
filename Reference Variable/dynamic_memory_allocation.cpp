#include <iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n ;
    cin >> n;

    //creating a variable size array

    int *arr = new int[n];

    //taking input in array
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout << "Sum of the array elements is: " << ans << endl;

    delete []arr;
    cout<<"Deleted"<< endl;3



    return 0;
}