void inverttree(Tree* root){
     if(root!=NULL){
     inverttree(root->left);
     inverttree(root->right);
     swap(root->left,root->right);
     }
 }

Tree* solve(Tree* root) {
    if(root==NULL){
        return NULL;
    }
    inverttree(root);
    return root;

}