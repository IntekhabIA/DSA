#include <iostream>
using namespace std;

void reachHome(int src, int dest){
    cout << "Source " << src << endl;
    if(src == dest){
        cout<<"Reached" << endl;
        return;
    }

    //processing - go one step ahead
    src++;

    reachHome(src, dest);
}



int main()
{
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);
}