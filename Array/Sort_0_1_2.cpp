#include<iostream>
using namespace std;


void sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){ 
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid] == 1) mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return;
}


int main(){
    int arr[]={0,1,1,0,1,2,1,2,0,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}