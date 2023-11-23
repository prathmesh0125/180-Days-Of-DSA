#include <iostream>
using namespace std;
#include<math.h>
bool IsPower2(int n)
{
  // if(n<1){
  //   return 0;
  // }
  // while(n%2==0){
  //   n/=2;
  // }
  // return n==1;
  // for(int i=1;i<n;i++){
  //   int ans=pow(2,i);
  //   if(ans==n){
  //     return 1;
  //   }
  // }
  // return 0;
  int power=1;
  for(int i=0;i<n;i++){
    power=power*2;
    if(power==n){
      return 1;
    }
  }
return 0;
}
int main()
{
  int n;
  cout << "Enter a number" << endl;
  cin >> n;
  cout << IsPower2(n);
}