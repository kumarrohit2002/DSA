#include<iostream>
using namespace std;


int secondLargestEle(int arr[],int size){
    
    int firstLargest=arr[0];
    int secondLargest=-1;

    for(int i=1;i<size;i++){
        if(arr[i]>firstLargest && arr[i]>secondLargest){
            secondLargest=firstLargest;
            firstLargest=arr[i];
        }else if(arr[i]>secondLargest && firstLargest!=arr[i]){
            secondLargest=arr[i];
        }
    }

    return secondLargest;       
}

int main(){ //[10, 50 , 12, 13, 24 , 39, 43, 23, 5]
    int n;
    cout<<"Enter Array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<secondLargestEle(arr,n);

    return 0;
}