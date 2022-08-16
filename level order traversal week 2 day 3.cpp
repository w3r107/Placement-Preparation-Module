vector<int> solve(Tree* root) {
    if(root==NULL){
        return {};
    }
    vector<int>v;
    queue<Tree*> q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            Tree* n=q.front();
            
            q.pop();
            v.push_back(n->val);
            if(n->left!=NULL){
                q.push(n->left);
            }
            if(n->right!=NULL){
                q.push(n->right);
            }

        }
    }
    return v;
}