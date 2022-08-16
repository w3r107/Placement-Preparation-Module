bool solve(Tree* root) {
    set<int> s;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()){
        Tree* f=q.front();
        q.pop();
        s.insert(f->val);
        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        }
    }
    return s.size()>1?false:true;
}