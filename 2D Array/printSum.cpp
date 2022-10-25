#include <iostream>
using namespace std;

void printColSum(int arr[][3], int row,int col){
    for(int j=0; j<col; j++){
        int sum = 0;
        for(int i=0; i<row; i++){
           sum += arr[i][j]; 
        }
        cout << sum << " ";
    }
}

void printSum(int arr[][3], int row,int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
           sum += arr[i][j]; 
        }
        cout << sum << " ";
    }
    cout<<endl;
}

int main(){
    int arr[3][3];

    cout<<"Enter the element"<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    //printing the array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<"printing sum row wise"<<endl;
    printSum(arr, 3,3);

    cout<<"printing sum column wise"<<endl;
    printColSum(arr, 3, 3);

}