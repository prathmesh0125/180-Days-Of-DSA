#include <iostream>
using namespace std;
/*
      *
     **
    ***
   ****
  *****
 ******
*******
*/
int main()
{
    int n = 7;
    cout<<"Enter number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= n - i; a++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}