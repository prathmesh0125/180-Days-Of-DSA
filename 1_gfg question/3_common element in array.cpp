#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void print(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    set<int> s;
    vector<int> v;
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            s.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else if(C[k]<A[i] && C[k]<A[i])
        {
            k++;
        }
    }
    for (auto it : s)
    {
        v.push_back(it);
    }

print(v,v.size());
    // return v;
}
int main()
{
    int A[6] = {1, 5, 10, 20, 40, 80};
    int B[5] = {6, 7, 20, 80, 100};
    int C[8] = {3, 4, 15, 20, 30, 70, 80, 120};
    commonElements(A, B, C, 6, 5, 8);
}