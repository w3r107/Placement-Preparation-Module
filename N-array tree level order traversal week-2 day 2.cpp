class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL){
            return {};
        }
        vector<vector<int>> v1;
        vector<int> v;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            
            int s=q.size();
            for(int i=0;i<s;i++){
                Node* node=q.front();
                v.push_back(node->val);
                q.pop();
                
               for(auto j: node->children){
                    q.push(j);
                }
            }
            v1.push_back(v);
            v={};
        }
            return v1;
    }
};