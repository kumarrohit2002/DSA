#include<iostream>
using namespace std;

int main(){
    // int arr[]={1,2,3,4};
    // cout<<arr;
    int a;
    cin>>a;
    cout<<"hello rohit: "<<a<<endl;
    return 0;
}


// 1. given a array size n produced a logic for printing all subsequent of array


Node* arrayToTree(int arr[],int size){ //{1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8, 9, -1}
    if(size<=0 || arr[0]==-1){
        return NULL;
    }
    Node* root=new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int i=1;
    int j=2;
    while(i<size && !q.empty()){
        Node* front=q.front();
        q.pop();
        if(i<size && arr[i]!=-1){
           Node* l=new Node(arr[i]);
           front->left=l;
           q.push(front->left);
        }
            i=i+2;
        if(j<size && arr[j]!=-1){
            Node* r=new Node(arr[j]);
            front->right=r;
            q.push(front->right);
        }
            j=j+2;
    }
    return root;
}