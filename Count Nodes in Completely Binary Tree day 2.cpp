int solve(Tree* root) {
    queue<Tree*> q;
    q.push(root);
    int c=0;
    while(!q.empty()){
        Tree* f=q.front();
        q.pop();
        c++;
       if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        } 
    }
    return c;
}