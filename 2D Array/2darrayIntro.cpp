#include <iostream>
using namespace std;

int main(){
    //create 2D array
    int arr[3][4];

    //taking input
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //taking input column wise
    // for(int j=0; j<4; j++){
    //     for(int i=0; i<3; i++){
    //         cin>>arr[i][j];
    //     }
    // }

    //print
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    //initialization
    // int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,20,30};
    int arr2[3][4] ={{1,11,111,1111},{2,22,222,2222}, {3,33,333,3333}};

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}