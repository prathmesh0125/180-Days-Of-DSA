#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        // cout<<i<<" = "<<i*i<<endl;
    }
    // even number
    for (int i = 0; i <= 10; i += 2)
    {
        // cout << i << " ";
    }
    // find evven number
int num;
cout<<"Enter number"<<endl;
cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}