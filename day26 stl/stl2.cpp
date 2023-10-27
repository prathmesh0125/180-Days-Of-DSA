#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,3};
    // v.pop_back();
    // v.erase(v.begin()+2);
    // v.clear();
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    

    // first element and last element in array
    cout<<v[0]<<endl;
    cout<<v.front()<<endl;
    cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;

    // copy value of first vecor to lastvector
    vector<int>v2;
    v2=v;
    cout<<v2.size()<<endl;

    // for printing value
    // sort(v2.begin(),v2.end());
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    int sum=0;
    for(auto i:v2){
        sum=sum+i;
    }
    cout<<sum;

    // serach in binarysearch
    // cout<<binary_search(v2.begin(),v2.end(),5);
}