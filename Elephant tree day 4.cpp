/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 //int sum;
int issum(Tree* root){
    if(root==NULL){
        return 0;
    }
    //int sum=0;
   int left= issum(root->left);
  int right= issum(root->right);
   
    
    
    return root->val=root->val+left+right;

}

Tree* solve(Tree* root) {

    issum(root);

return root;
    
}