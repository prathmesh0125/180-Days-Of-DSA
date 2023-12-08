#include<iostream>
using namespace std;
int power(int base, int exponatial){
  if(exponatial==0){
    return 1;
  }
  if(exponatial==1){
    return base;
  }
  return base*power(2,exponatial-1);
}
int main(){
  int exponatial=4;
  int base=2;
  cout<<power(base,exponatial);
}