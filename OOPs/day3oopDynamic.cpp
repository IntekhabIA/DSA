#include <iostream>
#include <vector>
using namespace std;

int main(){
    int col = 3;
    int row = 5;
    int** arr = new int*[5];

    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    //Printing the array
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //deallocate
    for (int i=0; i<row; i++){
        delete []arr[i];
    }

    delete []arr;

//we will be using 2d vectors mostly
    vector<vector<int>> vec(3, vector<int>(2,9)); 
//Printing the 2D vectors
    for(int i=0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}