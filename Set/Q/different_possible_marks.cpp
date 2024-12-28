#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int n,p,q;
    //n = no of question
    //p = marks for correct answer
    //q = makrs for incorrect answer
    cin>>n>>p>>q;

    unordered_set<int> set1;
    int a=0;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            a=(i*p)+(j*q);
            set1.insert(a);
        }
    }

    
    cout<<"Possible answer is: "<<set1.size();
    return 0;
}