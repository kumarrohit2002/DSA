#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    unordered_set<int> set1;
    set1.insert(2);
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);

    for(auto val:set1){
        cout<<val<<" ";
    }

    return 0;
}