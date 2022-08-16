bool solve(Tree* root, int val) {
    if(root==NULL){
        return 0;
    }
    int sum=0;
        queue<Tree*> q;
        q.push(root);
        while(!q.empty()){
            Tree* n=q.front();
            q.pop();

            if(n->val==val){
                return true;
            }
            if(n->left!=NULL){
                q.push(n->left);
            }
            if(n->right!=NULL){
                q.push(n->right);
            }
        }
    
    return false;
}