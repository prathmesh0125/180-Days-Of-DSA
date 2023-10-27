#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void sufffxsum(vector<int>&v){
    int n=v.size();
    vector<int>suffix(n);
    suffix[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]+v[i];
    }
    print(suffix);

}
int main(){
    vector<int> v = {6, 4, 5, -3, 2, 8};
    sufffxsum(v);
}
