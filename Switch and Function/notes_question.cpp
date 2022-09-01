#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount:"<<endl;
    cin>>n;
    
    int notes[]={500,200,100,50,20,10,1};

    for(int i=0; i<(sizeof(notes))/sizeof(notes[0]);i++){
        int numOfNOtes = n / notes[i];
        if(numOfNOtes !=0)
        cout<<"Notes of "<<notes[i]<<" : "<<numOfNOtes<<endl;
        n = n % notes[i];
        
    }

}