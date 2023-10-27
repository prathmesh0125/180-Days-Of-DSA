#include <iostream>
using namespace std;

int leap(int n)
{
    if (n % 400 == 0)
    {
        return true;
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int year;
    cout << "Enter year" << endl;
    cin >> year;
    cout << leap(year);
}