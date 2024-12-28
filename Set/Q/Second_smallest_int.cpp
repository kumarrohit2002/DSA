#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int> v(n);

    cout<<"Enter the element of vector: ";

    for(int i=0;i<n;i++) cin>>v[i];
    set<int> set1;
    for(auto val:v) set1.insert(val); 

    auto itr=set1.begin();
    itr++;

    cout<<"Second element of vector is "<<*itr;

    return 0;
}