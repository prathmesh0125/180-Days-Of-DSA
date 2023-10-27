#include<iostream>
using namespace std;

int reverse(int n){
    int ans=0,rem=0;
    while (n>0)
    {
        rem=n%10;
          if(ans>INT16_MAX/10 || ans<INT16_MIN/10){
          return 0;
        }
      
        ans=ans*10+rem;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
   cout<< reverse(n);
}