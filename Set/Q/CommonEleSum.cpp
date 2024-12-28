#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>n>>m;

    vector<int> v1(n);
    vector<int> v2(m);

    cout<<"Enter the vecto1 elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    cout<<"Enter the vecto2 elements: "<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    set<int> s1;

    for(auto i:v1){
        s1.insert(i);
    }

    set<int> s2;

    for(auto i:v2){
        s2.insert(i);
    }
    
    int sum=0;

    for(auto ele:s1){
        if(s2.find(ele)!=s2.end()){
            sum+=ele;
        }
    }

    cout<<"Answer: "<<sum;



    


    return 0;
}