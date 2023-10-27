#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >=5-i+1 ; j--)
        {
            cout << j << " ";
        }
        cout<<endl;
    }
    cout<<endl;
}