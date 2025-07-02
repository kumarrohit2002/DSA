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


void HorLevel(TreeNode* root,int& minlevel,int &maxlevel,int level){
    if(root==NULL) return;
    minlevel=min(minlevel,level);
    maxlevel=max(maxlevel,level);
    HorLevel(root->left,minlevel,maxlevel,level-1);
    HorLevel(root->right,minlevel,maxlevel,level+1);
}

void topView(TreeNode* root,vector<int> &ans,int level){
    if(root==NULL) return;
    if(ans[level]==INT32_MIN) ans[level]=root->val;
    topView(root->left,ans,level-1);
    topView(root->right,ans,level+1);
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    TreeNode* root=arrayToTree(arr,size);
    int minlevel=0;
    int maxlevel=0;
    HorLevel(root,minlevel,maxlevel,0);
    cout<<minlevel<<" "<<maxlevel<<endl;

    vector<int> ans(maxlevel-minlevel+1,INT32_MIN);
 
    topView(root,ans,-minlevel);
    for(int i:ans) cout<<i<<" ";

    return 0;
}