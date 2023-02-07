#include <iostream>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int** arr = new int*[n];

    // //creating array
    // for(int i=0; i<n; i++){
    //     arr[i] = new int[n];
    // }

    // //taking input
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin >> arr[i][j];
    //     }
    // }

    // //printing output
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    // // deleting the allocated memory
    // for(int i=0; i<n; i++){
    //     delete [] arr[i];
    // }

    // delete []arr;


    //Creating a 2d dynamic array with m rows and n columns
    int m,n;
    cout << " Enter number of rows " << endl;
    cin >> m;
    cout << " Enter number of columns " << endl;
    cin >> n;

    int **arr = new int*[m];

    for(int i=0; i<m; i++){
        arr[i] = new int[n];
    }

    //taking inputs
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    //printing output
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    //deleting the memory
    for(int i=0; i<n; i++){  // blocks of memory
        delete []arr[i];
    }

    delete []arr; // pointer array
    cout<<"memory released successfully"<<endl;

    return 0;
}