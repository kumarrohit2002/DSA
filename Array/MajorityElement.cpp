#include<iostream>
using namespace std;


int MajorityElement(int arr[],int n) {
    if(n<0) return -1;
    int ele=arr[0];
    int cnt=1;
    for(int i=1;i<n;i++){
        if(cnt==0 && (i+1)<n) ele=arr[i+1];
        if(ele==arr[i]) cnt++;
        else cnt--;
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(ele==arr[i]) cnt++;
    }

    if(cnt>n/2) return ele;
    else return -1;
}

int main(){
    int arr[]={7,7,5,7,1,5,7,5,5,7,7,5,5,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << "Majority element that appears more than " << size / 2 
    << " times in the array: " << MajorityElement(arr, size); 
    return 0;
}