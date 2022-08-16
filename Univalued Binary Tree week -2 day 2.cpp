class Solution {
public:
    unordered_set<int> st;
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL){
            return false;
        }
        queue<TreeNode*> q;
        q.push(root);
         
        while(!q.empty()){
            int s=q.size();
            while(s--){
            TreeNode* a=q.front();
            
            q.pop();
              st.insert(a->val);  
            
                if(a->left!=NULL){
                    q.push(a->left);}
                 if(a->right!=NULL){
                    q.push(a->right);}
            
        }
        }  
        if(st.size()==1)
        return true;
        
        return false;
    }
};