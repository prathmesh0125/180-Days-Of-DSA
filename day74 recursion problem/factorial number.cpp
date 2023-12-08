#include<iostream>
using namespace std;

int factorial(int n){
  if(n==1|| n==0){
    return 1;
  }
  return n*factorial(n-1);

}
int main(){
  int n=-1;
  if(n<0){
    cout<<"factorial is not possible"<<endl;
    return 0;
  }
 cout<< factorial(n);
}