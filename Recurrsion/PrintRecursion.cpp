#include<iostream>
using namespace std;

void solve(int x){
    if(x==0) return;
    cout<<"I love Recursion"<<endl;
    solve(x-1);
}

void printDigit(int n){
    if(n==0) return;
    printDigit(n/10);
    cout<<n%10<<" ";
}

int main(){
    int x;
    cin>>x;
    // solve(x);
    printDigit(x);
}