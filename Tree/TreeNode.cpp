#include<iostream>
using namespace std;
#include<queue>

class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val = val;
        this->left=NULL;
        this->right=NULL;
    }
};

void displayTree(Node* root){
    if(root==NULL) return;
    displayTree(root->left);
    cout<<root->val<<" "; //inOrder triversel
    displayTree(root->right);
}

int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left)+sum(root->right);
}

int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxVal(Node* root){
    if(root==NULL) return 0;
    return max(root->val, max(maxVal(root->left),maxVal(root->right)));
}
int minVal(Node* root){
    if(root==NULL) return 0;
    return min(root->val, min(minVal(root->left),minVal(root->right)));
}

int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left), level(root->right));
}

void helper(Node* root,int& maxDai){
    if(root==NULL) return;
    int dai=level(root->left)+level(root->right);
    maxDai=max(maxDai,dai);
    helper(root->left,maxDai);
    helper(root->right,maxDai);
}

int diameterOfTree(Node* root){
    int maxDai=0;
    helper(root,maxDai);
    return maxDai;
}

void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";       //root
    preorder(root->left);  //left
    preorder(root->right);   //right
}
void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left); //left
    cout<<root->val<<" ";  //root
    inorder(root->right); //right
}
void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);  //left
    postorder(root->right);   //right
    cout<<root->val<<" ";     //root
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

void levelOrder_Queue(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        cout<<front->val<<" ";
        if(front->left!=NULL) q.push(front->left);
        if(front->right!=NULL) q.push(front->right);
    }
    cout<<endl;
    return;
}



int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;

    cout<<"Tree element is: ";
    displayTree(a);
    cout<<endl;

    cout<<"level of tree is: "<<level(a)<<endl;

    cout<<"Sum of tree element: "<<sum(a)<<endl;
    cout<<"Size of tree : "<<size(a)<<endl;

    cout<<"Max Value of Tree: "<<maxVal(a)<<endl;
    cout<<"Min Value of Tree: "<<minVal(a)<<endl;
    cout<<"Level of tree: "<<level(a)<<endl;

    cout<<"Max Daimeter of Tree: "<<diameterOfTree(a)<<endl;

    cout<<"preOrder: ";
    preorder(a);
    cout<<endl;
    cout<<"inOrder: ";
    inorder(a);
    cout<<endl;
    cout<<"postOrder: ";
    postorder(a);
    cout<<endl;
    print_Nth_Level_Ele(a,1,2); // level 2 eles print 
    cout<<endl;
    cout<<"Level order Traversal: "<<endl;
    levelOrder(a);
    cout<<endl;
    cout<<"Level order Using Queue: ";
    levelOrder_Queue(a);
    return 0;
}