#include<iostream>
#include<vector>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n) {
    // Ek vector banaya gaya hai jisme har ek element ka count store hoga.
    vector<int> cntr(n+1,0);
    int B, A;  // B and A, jo missing elements hain, unke liye variables declare kiye gaye hain.

    // Ab hum loop chalayenge array par.
    for(int i = 0; i<n;i++){
        cntr[arr[i]]++;  // Har ek element ka count badhaya jayega.
        if(cntr[arr[i]] == 2)
            B = arr[i];  // Agar kisi element ka count do ho gaya, toh woh B hai (duplicate element).
    }

    // Ab ek aur loop chalayenge 1 se lekar n tak.
    for(int i = 1; i<=n; i++)
        if(cntr[i] == 0)
            A = i;  // Agar kisi element ka count 0 hai, toh woh A hai (missing element).

    // B aur A ko return kiya jayega.
    return {B, A};
}

int main(){
  vector<int>arr(3,0);
  arr={1,3,3};
 vector<int>result=findTwoElement(arr,3);
 cout<<result[0]<<" "<<result[1];
}