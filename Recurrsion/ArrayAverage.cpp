#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

double average(vector<double> v,int i){
    if(i==v.size()) return 0.00000;
    return average(v,i+1)+v[i];
}


int main(){
    int n;
    cin>>n;
    vector<double> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;
    double avg=average(v,i);

    cout<<fixed<<setprecision(5)<<avg/n;
    

    return 0;
}