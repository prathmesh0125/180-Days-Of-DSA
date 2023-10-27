#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int temp=n;
 int rem=0,ans=0;
    while(n>0){
        rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    if(temp==ans){

    return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    
    cout<<ispalindrome(n);
   
    
}