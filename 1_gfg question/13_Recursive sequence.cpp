#include<iostream>
using namespace std;
 long long sequence(int N){
          long long int num = 0, k = 1;
    for(int i=0; i<N; i++) {
        long long int t = 1;
        for(int j=0; j<=i; j++){
            
            t *= k;
            k++;
        }
        num += t;
    }
    return num;
    }

    int main(){
      int n=5;
      cout<<sequence(n);
    }