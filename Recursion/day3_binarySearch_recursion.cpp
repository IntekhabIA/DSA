#include <iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k){
    print(arr,s,e);
    if(s>e)
        return false;

    int mid = s + (e-s)/2;
    if(arr[mid] == k)
        return true;
    else if(k < arr[mid])
        return binarySearch(arr,s, mid-1, k);
    else{
        return binarySearch(arr,mid+1, e, k);
    }
    
}

int main(){
    int arr[8] = {1,3,4,5,8,9,10,99};
    bool ans = binarySearch(arr,0,7,99);
    
     if(ans){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }





    return 0;
}