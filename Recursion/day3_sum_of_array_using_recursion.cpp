#include <iostream>
using namespace std;

int findSum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    return arr[0]+findSum(arr+1,size-1);
}

int main(){
    int arr[5] = {1,3,4,5,6};
    int ans = findSum(arr,5);

    cout << "Sum is "<< ans << endl;
}