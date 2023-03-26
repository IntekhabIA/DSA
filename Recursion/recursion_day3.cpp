#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 1){
        return true;
    }
    if(arr[0] > arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {1,3,3,5,7};
    int size = 5;

    bool ans = isSorted(arr,5);
    if(ans){
        cout << "Sorted" << endl;
    }
    else{
        cout << "not Sorted" << endl;
    }
    return 0;
}