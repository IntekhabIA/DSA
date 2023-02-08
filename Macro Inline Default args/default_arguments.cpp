#include <iostream>
using namespace std;

void show(int *arr, int start=0, int end){
    for(int i=start; i<end; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    show(arr,5);

}