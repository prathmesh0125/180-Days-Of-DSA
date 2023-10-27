#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int row=0;row<=4;row++){
        for( int col=0;col<=row;col++){
            if((row-1)<=0){
                cout<<col+1<<" ";
            }
            else{
                cout<<row+col<<" ";
            }
        }
        cout<<endl;
    }
}