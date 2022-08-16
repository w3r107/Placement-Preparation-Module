/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 
int dfs(Tree* root){
    if(root==NULL){
        return 0;
    }
    int ans=root->val+max(dfs(root->left),dfs(root->right));

return ans;
}


int solve(Tree* root) {
 int ans=0;
  ans= dfs(root);
   return ans; 
}