/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    
    if (root == NULL) 
        return 0;
    int leftdepth = maxDepth(root->left);
    int rightdepth = maxDepth(root->right);
    int max;
    if(leftdepth > rightdepth)
        max = leftdepth;
    else
        max = rightdepth;
    return 1 + max;


    
}