#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key < arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    int arrEven[6] = {2,3,4,7,23,28};
    int arrOdd[5] = {5,6,12,32,45};

    int indexEven = binarySearch(arrEven, 6, 7);
    cout<<"Index of 7 is : "<<indexEven<<endl;

    int indexOdd = binarySearch(arrOdd, 5, 45);
    cout<<"Index of 45 is : "<<indexOdd<<endl;


}