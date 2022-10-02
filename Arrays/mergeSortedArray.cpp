#include <iostream>

using namespace std;
void merge(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i=0;
    int j=0; 
    int k=0;

    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]= arr2[j];
            k++;
            j++;
        }
    }
    while(i<m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr[], int size){
    for(int i=0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int main(){
    int arr1[6] = {1,2,3,5,7,9};
    int arr2[3] = { 4,6,8};
    int arr3[9] = {0};

    merge(arr1,6,arr2,3,arr3);
    print(arr3,9);




    return 0;
}