class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>> v1;
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* node=q.front();
                v.push_back(node->val);
                q.pop();
                if(node->left !=NULL){
                q.push(node->left);
             }
            if(node->right !=NULL){
                q.push(node->right);
            }
            }
            v1.push_back(v);
            v={};
        }
            return v1;
    }
};