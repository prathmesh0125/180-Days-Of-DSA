#include <iostream>
using namespace std;

int prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % 2 == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int sum(int a,int b=3){//default parameter
    int ans=a+b;
    return ans;
}
int main()
{
    int a = 6;
    int b = 8;
    
    cout << "a pime number " << prime(a) << endl;
    cout << "a factoial  " << factorial(a) << endl;
    cout << "b pime number " << prime(b) << endl;
    cout << "a factoial  " << factorial(b) << endl;
    cout << "b pime number " << prime(b - a) << endl;
    cout << "b pime number " << factorial(b - a) << endl;
    cout<<"sum is "<<sum(a)<<endl; 
}