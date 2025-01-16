#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};


Node* arrayToTree(int arr[],int n){
    if(n<0) return NULL;
    Node* root=new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int i=1,j=2;
    while(i<n && !q.empty()){
        Node* front=q.front();
        q.pop();
        if(arr[i]!=-1 && i<n){
            Node* left=new Node(arr[i]);
            front->left=left;
            q.push(left);
        }
        i+=2;
        if(arr[j]!=-1 && j<n){
            Node* right=new Node(arr[j]);
            front->right=right;
            q.push(right);
        }
        j+=2;
    }
    return root;
}

int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left), level(root->right));
}

void print_Nth_Level_Ele(Node* root,int currlevel,int level){
    if(root==NULL) return;
    if(currlevel==level){ 
        cout<<root->val<<" ";
        return;
    }
    print_Nth_Level_Ele(root->left, currlevel+1 ,level);
    print_Nth_Level_Ele(root->right, currlevel+1 ,level);
}

void levelOrder(Node* root){
    int l=level(root);
    for(int i=1;i<=l;i++){
        print_Nth_Level_Ele(root,1,i);
        cout<<endl;
    }
}



void levelOrder_Queue(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();  

        for (int i = 0; i < levelSize; i++) {
            Node* front = q.front();
            q.pop();
            cout << front->val << " ";
            if (front->left != NULL) q.push(front->left);
            if (front->right != NULL) q.push(front->right);
        }
        cout << endl;  
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Node* root=arrayToTree(arr,size);
    levelOrder_Queue(root);
    cout<<endl;
    levelOrder(root);
    return 0;
}