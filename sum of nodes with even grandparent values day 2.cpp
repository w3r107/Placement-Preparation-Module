/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int s(Tree* n){
    int s=0;
    if(n->left!=NULL){
        if(n->left->left!=NULL){
            s+=n->left->left->val;
        }
        if(n->left->right!=NULL){
            s+=n->left->right->val;
        }
    }
    if(n->right!=NULL){
        if(n->right->left!=NULL){
            s+=n->right->left->val;
        }
        if(n->right->right!=NULL){
            s+=n->right->right->val;
        }
    }
    return s;
}

int solve(Tree* root) {
    if(root==NULL){
        return 0;
    }
    int res=0;
    queue<Tree*> q;
    q.push(root);
    while(!q.empty()){
        Tree* t=q.front();
        q.pop();
        if(t->val%2==0){
            res+=s(t);
        }
        if(t->left!=NULL){
            q.push(t->left);
        }
        if(t->right!=NULL){
            q.push(t->right);
        }
    }
    return res;
}