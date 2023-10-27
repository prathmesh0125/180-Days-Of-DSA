#include <iostream>
using namespace std;
/*
 * * * * * * * * *
   * * * * * * *
    * * * * *
    * * *
      *
 */
int main()
{
    // 1 approach
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        for (int k = 2 * n - 1; k >= 2 * i - 1; k--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    //  2 approach
    int nu = 4;
    for (int i = nu; i >=1; i--)
    {

        for (int j = 1; j <= nu - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <=  2 * i -1; k++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    /*
     * * * * * * * * *
     * * * * * * *
     * * * * *
     * * *
     *
     *
     * * *
     * * * * *
     * * * * * * *
     * * * * * * * * *
     */

    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=i-1; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for(int k=2*n-1;k>=2*i-1;k--){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;

    // }
    // int number =5;
    // for(int i=1;i<=number;i++){
    //     for(int j=1;j<=number-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
}