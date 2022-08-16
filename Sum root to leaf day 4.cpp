/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int solve(TreeNode* t,int v){
     if(t==NULL){
        return 0;
     }
     v=((v*10)+t->val)%1003;
      if(t->left == NULL && t->right == NULL){
        return v;
    }
    
    return (solve(t->left, v)+solve(t->right, v))%1003;
 }
int Solution::sumNumbers(TreeNode* A) {
    int v=0;
    return solve(A,v);
    
}
