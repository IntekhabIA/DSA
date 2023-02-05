#include <iostream>
using namespace std;

void update (int **p2){
    // p2 = p2 + 1;
    // *p2 = *p2 + 1;
    **p2 = **p2 + 1;
}

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

   /* cout << "Hello" << endl;

    cout << " Printing p " << p << endl;
    cout << " Address of p " << &p << endl;
    cout << *p2 << endl;

    //printing i
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    //printing content of p or address of i
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    
    //printing content of p2 or address of p
    cout << &p << endl;
    cout << p2 << endl;
*/

    cout << " Before " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;

    update(p2);
    
    cout << " After " << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;



    return 0;
}