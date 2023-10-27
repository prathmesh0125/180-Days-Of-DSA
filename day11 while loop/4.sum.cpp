#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    int i = 1;
    int sum = 0;
    do
    {
        i++;
        cout << i << " " << sum << endl;
        sum += i;

    } while (i <= n);
    cout << sum;
}