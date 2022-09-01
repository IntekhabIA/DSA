#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1, k = 1;
        // for number
        while (j <= n - i + 1)
        {
            cout << j<<" ";
            j++;
        }

        // for star
        while (k <= 2 * (i - 1))
        {
            cout << "*"<<" ";
            k++;
        }

        j = j - 1;
        while (j >= 1)
        {
            cout << j <<" ";
            j--;
        }
        cout<<endl;
        i++;
    }

}