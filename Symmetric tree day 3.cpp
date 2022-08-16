class Solution {
public:
    
    bool helper(TreeNode* a, TreeNode* b){
        if(a==NULL and b==NULL){
            return true;
        }
        
        if((a==NULL and b!=NULL) or (a!=NULL and b==NULL)){
            return  false;
        }
        
        if(a->val==b->val){
            return helper(a->left,b->right) and helper(a->right,b->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return false;
        }
        else if(root->left==NULL and root->right==NULL){
            return true;
        }
        else{
            return helper(root->left,root->right);
        }
        
    }
};