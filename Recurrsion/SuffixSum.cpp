#include<iostream>
#include<vector>
using namespace std;


int suffixSum(vector<int> v,int i){
    if(i>=v.size()-1) return v[v.size()-1];
    return suffixSum(v,i+1)+v[i];
}

int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   
    int ans=suffixSum(v,n-m);
    cout<<ans;

    return 0;
}