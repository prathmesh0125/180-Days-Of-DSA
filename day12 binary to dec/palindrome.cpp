#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Binary number" << endl;
    cin >> num;
    int temp = num;
    int rem = 0;
    int ans = 0;
    while (num > 0)
    {
        rem=num%10;
        ans=ans*10+rem;
        num=num/10;
    }
    if(temp==ans){
        cout<<"number is palidrome"<<endl;
    }
    else{
        cout<<"number is not palidrome"<<endl;

    }
  
}
