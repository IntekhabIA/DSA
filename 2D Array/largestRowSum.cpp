#include <iostream>
using namespace std;

void largestRowSum(int arr[][3], int row, int col){
    int maxSum = 0;
    int rowIndex = -1;

    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > maxSum){
            maxSum = sum;
            rowIndex = i;
        }
    }

    cout<<"The maximum sum is "<<maxSum<<endl;
    cout<<"Row index "<<rowIndex<<endl;
}


void printarray(int arr[][3], int row, int col){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3];
    cout<<"Enter the elements :"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    printarray(arr,3,3);
    largestRowSum(arr,3,3);

}