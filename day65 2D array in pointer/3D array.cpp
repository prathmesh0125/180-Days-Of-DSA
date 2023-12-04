#include<iostream>
using namespace std;
int main(){
 int l,b,h;
 cin>>l>>b>>h;
 int ***ptr=new int**[l]; 
//  create 2D array and store its addres into ptr
for(int i=0;i<l;i++){
  ptr[i]=new int*[b];

  for(int j=0;j<b;j++){
    ptr[i][j]==new int[h];
  }

}

for(int i=0;i<l;i++){
  for(int j=0;j<b;j++){
    for(int k=0;k<h;k++){
      ptr[i][j][k]=i+j+k;
    }
  }
}
cout<<endl;
for(int i=0;i<l;i++){
  for(int j=0;j<b;j++){
    for(int k=0;k<h;k++){
      cout<<ptr[i][j][k]<<endl;
    }
  }
}


}