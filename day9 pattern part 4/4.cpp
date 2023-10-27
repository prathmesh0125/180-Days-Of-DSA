#include <iostream>
using namespace std;

/*
* * * * * * * *
* * *     * * *
* *         * *
*             *
*             *
* *         * *
* * *     * * *
* * * * * * * *
*/
int main()
{
    int n = 8;
    for (int i = n; i>=1; i--)
    {
        for(int k=1;k<=i;k++){
            cout<<"*"<<" ";
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        for(int m=1;m<=i;m++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (int i = 1; i<=n; i++)
    {
        for(int k=1;k<=i;k++){
            cout<<"*"<<" "; 
        }
        for(int j=1;j<=2*n-2*i;j++){
            cout<<"  ";
        }
        for(int m=1;m<=i;m++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}