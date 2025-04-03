#include<iostream>
using namespace std;

int Sequence3n_1(int n){
    if(n==1) return 1;
    return n%2==0? Sequence3n_1(n/2)+1:Sequence3n_1(3*n+1)+1;
}

int main(){
    int n;
    cin>>n;

    cout<<Sequence3n_1(n);
    return 0;
}