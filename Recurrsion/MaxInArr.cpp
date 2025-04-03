#include<iostream>
#include<vector>
using namespace std;

int maxNo(vector<int>& v,int i){
    if(i>=v.size()-1) return v[i];
    return max(v[i],maxNo(v,i+1));
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;
    int ans=maxNo(v,i);
    cout<<ans;
}