/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode* A){
      if(A==NULL)
    return INT_MAX;
    
    if (!A->left && !A->right)
        return 1;
    
    return 1+min(solve(A->left),solve(A->right));
 }
int Solution::minDepth(TreeNode* A) {
    if(A==NULL)
    return 0;
    
    if (!A->left && !A->right)
        return 1;
        
        return solve(A);
}
