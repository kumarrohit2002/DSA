#include<iostream>
#include<queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
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

void leftBoundary(TreeNode* root) {
    if (!root || (!root->left && !root->right)) return;
    cout << root->val << " ";
    if (root->left) leftBoundary(root->left);
    else leftBoundary(root->right);
}

void rightBoundary(TreeNode* root) {
    if (!root || (!root->left && !root->right)) return;
    if (root->right) rightBoundary(root->right);
    else rightBoundary(root->left);
    cout << root->val << " ";
}

void leafNodes(TreeNode* root) {
    if (!root) return;
    if (!root->left && !root->right) {
        cout << root->val << " ";
        return;
    }
    leafNodes(root->left);
    leafNodes(root->right);
}

void BoundaryOfTree(TreeNode* root) {
    if (!root) return;
    cout << "BoundaryOfTree element is: ";
    cout << root->val << " ";           
    leftBoundary(root->left);           
    leafNodes(root);              
    rightBoundary(root->right);         
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, -1, 6, -1, -1, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    TreeNode* root = arrayToTree(arr, size);
    BoundaryOfTree(root);
    return 0;
}
