#include<iostream>
using namespace std;
int main(){
  int number=5;
  for(int i=1;i<=number;i++){
   for(int j=1;j<=number-i;j++){
    cout<<"  ";
   }
   for(int k=1;k<=i;k++){
   cout<<"*"<<"   ";
   }
   cout<<endl;
  }


    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  "; 
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int nu=5;
    for(int i=1;i<=nu;i++)
    {
        for(int j=1;j<=nu-i;j++){
            cout<<"  ";
        }
        char ch='A';
        for(int k=1;k<=i;k++){
          cout<<ch++<<" ";
        }
        for(int c=i-1;c>=1;c--){
            char cb='A'+c-1;
          cout<<cb<<" "; 
        }
        cout<<endl;
    }

cout<<endl;
    int no=5;
    for(int i=1;i<=no;i++){
        for(int j=1;j<=no-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*"<<"   ";
        }
        cout<<endl;
    }
      
    
    for(int i=no;i>=1;i--){
        for(int j=1;j<=no-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*"<<"   ";
        }
        cout<<endl;
    }
}