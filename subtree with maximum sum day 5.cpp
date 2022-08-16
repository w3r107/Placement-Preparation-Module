/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 int ans;
 int dfs(Tree* root){
    
     if(root==NULL){
         return 0;
     }
     int x=dfs(root->left)+dfs(root->right)+root->val;
     ans=max(ans,x);
     return x;
 }
int solve(Tree* root) {
   ans=0;
   dfs(root);
   return ans;
}