#include <iostream>
using namespace std;

int firstOccurence(int arr[], int size, int k){
    int start = 0, end = size-1;
    int ans = -1;
    int mid = start + (end -  start)/2;

    while (start <= end)
    {
        if(k == arr[mid]){
            ans = mid;
            end= mid-1;
        }
        else if (k<arr[mid])
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end -  start)/2;
    }
    return ans;  
}

int lastOccurence(int arr[], int size, int k){
    int start = 0, end = size-1;
    int ans = -1;
    int mid = start + (end -  start)/2;

    while (start <= end)
    {
        if(k == arr[mid]){
            ans = mid;
            start= mid+1;
        }
        else if (k<arr[mid])
        {
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end -  start)/2;
    }
    return ans;  
}

int main(){
    int odd[9]={1,2,2,2,2,2,2,3,4};
    cout<<"First occurence of 2 is at index : "<<firstOccurence(odd,9,2)<<endl;
    cout<<"Last occurence of 2 is at index : "<<lastOccurence(odd,9,2)<<endl;

}