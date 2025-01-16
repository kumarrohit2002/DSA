#include<iostream>
using namespace std;


int MaximumSubarraySum(int arr[],int n){  // timme O(N^2)
    int Max=INT32_MIN;
    for(int i=0;i<n-1;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            Max=max(sum,Max);
        }
    }
    return Max;
}

int MaximumSubarraySum1(int arr[],int n){ // timme O(N)
    int Max=INT32_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]+sum<arr[i]) sum=arr[i];
        else sum+=arr[i];
        Max=max(sum,Max);
    }
    return Max;
}


int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"MaximumSubarraySum is: "<<MaximumSubarraySum(arr,size)<<endl;
    cout<<"MaximumSubarraySum is: "<<MaximumSubarraySum1(arr,size)<<endl;


    return 0;
}