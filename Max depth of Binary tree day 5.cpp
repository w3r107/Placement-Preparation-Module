/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode* t){
     if(t==NULL)
     return 0;
     
     return 1+max(solve(t->left),solve(t->right));
 }
int Solution::maxDepth(TreeNode* A) {
    //int c=1,m=1;
    return solve(A);
}
