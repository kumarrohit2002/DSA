#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void nextPermutationGreater(vector<int> &A){  //[2,1,5,4,3,0,0];
    int idx=-1;
    int n=A.size();
    //step 1
    for(int i=n-2;i>=0;i--){ //idx=1
        if(A[i]<A[i+1]){
            idx=i;
            break;
        }
    }
    //step 2
    if(idx==-1){
        reverse(A.begin(),A.end());
        return;
    }

    //step 3
    for(int i=n-1;i>=idx;i--){ 
        if(A[i]>A[idx]){
            swap(A[i],A[idx]);
            break;
        }
    }

    //step 4
    reverse(A.begin()+idx+1,A.end());

    return;
}

int main(){
    vector<int> v={2,1,5,4,3,2,0};
    nextPermutationGreater(v);
    for(auto i:v) cout<<i<<" ";
}

