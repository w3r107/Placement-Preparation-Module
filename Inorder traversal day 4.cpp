void inorder(Tree *node,vector<int>& v)
   {
          if(node==NULL)
          return;
          if(node!=NULL){
           inorder(node->left,v);
           v.push_back(node->val);
           inorder(node->right,v);
          }
      
   }

vector<int> solve(Tree* root) {
    if(root==NULL){
        return {};
    }
    vector<int> v;
    inorder(root,v);

    return v;
}