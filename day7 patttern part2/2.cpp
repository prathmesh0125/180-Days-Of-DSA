#include <iostream>
using namespace std;

/*1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << j<< " ";
            // cout << count++ << " ";
        }
        cout << endl;
    }
}