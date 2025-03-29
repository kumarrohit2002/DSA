#include<iostream>
using namespace std;


void binary(int n,int& ans){
    if(n==0){ ans=0; return;}
    if(n==1){ ans=1; return;}
    binary(n/2,ans);
    if(n%2==0){
        ans=(ans*10)+0;
    }else{
        ans=(ans*10)+1;
    }
}


int main(){
    int n;
    cin>>n;
    int ans=0;

    binary(n,ans);

    cout<<ans;

    return 0;

}