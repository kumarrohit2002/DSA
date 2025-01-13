//Leetcode no - 543 



int level(TreeNode *root){
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}

void helper(TreeNode *root, int &maxDai)
{
    if (root == NULL)
        return;
    int dai = level(root->left) + level(root->right);
    maxDai = max(maxDai, dai);
    helper(root->left, maxDai);
    helper(root->right, maxDai);
}

int diameterOfBinaryTree(TreeNode *root)
{
    int maxDai = 0;
    helper(root, maxDai);
    return maxDai;
}