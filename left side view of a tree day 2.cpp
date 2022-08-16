/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 void s(Tree* root,int l,vector<int>& v){
     if(root==NULL)
     return ;
     if(l==v.size())
     v.push_back(root->val);

     s(root->left,l+1,v);
     s(root->right,l+1,v);
 }


vector<int> solve(Tree* root) {
    vector<int> v;
    s(root,0,v);
    return v;
}