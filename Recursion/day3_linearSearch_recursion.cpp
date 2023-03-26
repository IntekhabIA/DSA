#include <iostream>
using namespace std;

void print(int arr[], int size, int key){
    cout << "Size of Array " << size << " key value " << key << endl;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool linearSearch(int arr[], int size, int key){
    print(arr,size, key);
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr+1, size-1, key);
    }
}

int main(){

    int arr[5] = {3,1,2,5,6};

    bool ans = linearSearch(arr,5,2);

    if(ans){
        cout << "Present" << endl;
    }
    else{
        cout << "Not present" << endl;
    }



    return 0;
}