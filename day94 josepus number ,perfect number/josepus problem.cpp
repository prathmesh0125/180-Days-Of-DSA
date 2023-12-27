#include<iostream>
#include<vector>
using namespace std;

// first approach
int findWinner(vector<bool>person,int n,int index ,int person_left,int k){
  // base case
  if(person_left==1){
    for(int i=0;i<n;i++){
      if(person[i]==0){
        return i;
      }
    }
  }
  // killing postion 
  int kill=(k-1)%person_left;

  // killing index
  while(kill--){
    index=(index+1)%n;
    while(person[index]==1){
    index=(index+1)%n;
    }
  }
  person[index]=1;
  while(person[index]==1){
    index=(index+1)%n;
  }

return findWinner(person,n,index,person_left-1,k);
}

// second approach

int findWinner2(int n,int k){
  if(n==1){
    return 0;
  }
  return (findWinner2(n-1,k)+k)%n;
}

int main(){
  int n=5,k=3;
// vector<bool>person(n,0);
// cout<<findWinner(person,n,0,n,k);
cout<<findWinner2(n,k);
}