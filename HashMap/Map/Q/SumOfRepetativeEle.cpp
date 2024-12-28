#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,1,2,1,3,3,3};
    map<int,int> m;

    for(int i=0;i<v.size();i++){
        m[v[i]]+=1;
    }
    int sum=0;
    for(auto a:m){
        if(a.second>1) sum+=a.first;
    }
    cout<<sum<<endl;
    
    return 0;
}