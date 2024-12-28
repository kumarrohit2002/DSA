#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int ,greater<int>> ms; //desending
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.insert(1);


    for(auto val:ms) cout<<val<<" ";


    return 0;
}