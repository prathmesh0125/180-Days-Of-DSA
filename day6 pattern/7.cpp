#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << count++ << " ";
            // i++;
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = (i-1)*5+1; j <= (i-1)*5+5; j++)
        {
            cout << j << " ";
            // i++;
        }
        cout << endl;
    }
}