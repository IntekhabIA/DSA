#include <iostream>
using namespace std;

void sort(int arr[], int n){
    if(n==1){
        return;
    }
    for(int i=0; i<n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    return sort(arr, n-1);
}

int main(){

    int arr[5] = {5,4,6,2,1};
    sort(arr,5);

    //printing array
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}