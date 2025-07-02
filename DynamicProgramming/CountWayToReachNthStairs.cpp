#include <bits/stdc++.h> 
using namespace std;
#define MOD 1000000007

int solve(int nStairs){
    int a=1,b=2;
    if(nStairs<0) return 0;
    if(nStairs<2 ) return 1;
    if(nStairs<3) return 2;
    int ans;
    for(int i=3;i<=nStairs;i++){
        ans=a+b;
        a=b;
        b=ans%MOD;
    }
    return ans%MOD;

}
// int solve(int nStairs,int i){
//     if(nStairs==i) return 1;
//     if(nStairs<i) return 0;
//     return (solve(nStairs,i+1)+solve(nStairs,i+2));
// }

int countDistinctWays(int nStairs) {
    //  Write your code here.
    return solve(nStairs);
}

int main(){
    int way=countDistinctWays(45);
    cout<<way;
    return 0;
}
