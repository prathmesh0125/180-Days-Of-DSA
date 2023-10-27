#include <iostream>
using namespace std;
int SearchElement(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[6]={10,20,7,11,8,4};
    int key;
    cout<<"Enter key"<<endl;
      cin>>key;
    cout<<SearchElement(arr,6,key);
}
