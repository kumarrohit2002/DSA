#include<iostream>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

TreeNode* arrayToTree(int arr[],int n){
    if(n<0) return NULL;
    TreeNode* root=new TreeNode(arr[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i=1,j=2;
    while(i<n && !q.empty()){
        TreeNode* front=q.front();
        q.pop();
        if(arr[i]!=-1 && i<n){
            TreeNode* left=new TreeNode(arr[i]);
            front->left=left;
            q.push(left);
        }
        i+=2;
        if(arr[j]!=-1 && j<n){
            TreeNode* right=new TreeNode(arr[j]);
            front->right=right;
            q.push(right);
        }
        j+=2;
    }
    return root;
}

void PreOrderTraversal(TreeNode* root){
    cout<<"Post Order Traversal: ";
    if(root==NULL) return;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* top=st.top();
        st.pop();
        cout<<top->val<<" ";
        if(top->right) st.push(top->right);
        if(top->left) st.push(top->left);
    }
    cout<<endl;
}

void PostOrderTraversal(TreeNode* root){
    cout<<"Post Order Traversal: ";
    if(root==NULL) return;
    vector<int> v;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* top=st.top();
        st.pop();
        v.push_back(top->val);
        if(top->left) st.push(top->left);
        if(top->right) st.push(top->right);
    }
    reverse(v.begin(),v.end());
    for(int i:v) cout<<i<<" ";
    cout<<endl;
}

void InOrderTraversal(TreeNode* root){
    cout<<"In Order Traversal: ";
    if(root==NULL) return;
    stack<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* top=st.top();
        if(top!=NULL){
            st.push(top->left);
        }else{
            st.pop();
            TreeNode* temp=st.top();
            st.pop();
            cout<<temp->val<<" ";
            st.push(temp->right);
        }
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=arrayToTree(arr,size);

    PreOrderTraversal(root);
    PostOrderTraversal(root);
    InOrderTraversal(root);
    return 0;
}