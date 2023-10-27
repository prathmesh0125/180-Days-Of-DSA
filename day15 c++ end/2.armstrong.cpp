#include <iostream>
#include <math.h>
using namespace std;
int CountDigit(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
int Armstrong(int n,int digit)
{
    int temp=n;
    int ans=0;
    int rem=0;
    while(n){
        rem=n%10;
    
        ans=pow(rem,digit)+ans;
        n/=10;
    }
    if(temp==ans){
        return 1;

    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    int digit = CountDigit(n);
    cout<<Armstrong(n,digit);
}