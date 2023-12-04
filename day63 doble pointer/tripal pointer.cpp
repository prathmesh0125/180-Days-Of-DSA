#include<iostream>
using namespace std;
int main(){
  int n=10;
  int *p=&n;//singel pointer
  int  **pt=&p;//double pointer
  int ***ptr=&pt;//tripal pointer


  cout<<***ptr<<endl;; 
n=***ptr+5;
cout<<n<<endl;
}