#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'a' +(i-1);
        for (int j = 1; j <= 5; j++)
        {
            cout << ch<< " ";
        }
        // ch++;
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'a';
        for (int j = 1; j <= 5; j++)
        {
            cout << ch<< " ";
        ch++;
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'a';
        for (int j = i; j <= 5; j++)
        {
            cout << ch<< " ";
        ch++;
        }
        cout<<endl;
    }
    // cout<<endl;
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'a';
        for (int j = 1; j <= i; j++)
        {
            cout << ch<< " ";
        ch++;
        }
        cout<<endl;
    }
}