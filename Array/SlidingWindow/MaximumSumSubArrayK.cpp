#include<iostream>
#include<vector>
using namespace std;


int maximumSumSubarrK(vector<int> arr,int k){
    int size=arr.size();
    int i=0;
    int j=0;
    int ans=INT32_MIN;
    int sum=0;

    while(j<k){
        sum+=arr[j];
        j++;
    }
    ans=max(sum,ans);

    while(j<size){
        sum-=arr[i];
        i++;
        sum+=arr[j];
        j++;
        ans=max(sum,ans);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int k;
    cout<<endl<<"Enter the Size of Subarray K: ";
    cin>>k;

    cout<<maximumSumSubarrK(v,k);



    return 0;
}