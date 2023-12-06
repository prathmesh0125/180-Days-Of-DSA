#include <iostream>
using namespace std;
// void printeven(int num,int n){
//    if(num>n){
//     // cout<<num;
//     return;
//   }
//   cout<<num<<endl;
//   printeven(num+2,n );
// }

void printeven(int n){
   if(n==2){
  cout<<n<<endl;

    return;
  }
  printeven(n-2);
  cout<<n<<endl;

}
int main()
{
  int n =11;

  // printeven(2,9);
  if(n%2==1){
n-1;
  }
  printeven(n);

}