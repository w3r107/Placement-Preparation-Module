/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int solve(Tree* root) {
    if(root==NULL){
        return 0;
    }
    int sum=0;
        queue<Tree*> q;
        q.push(root);
        while(!q.empty()){
            Tree* n=q.front();
            q.pop();

            sum+=n->val;
            if(n->left!=NULL){
                q.push(n->left);
            }
            if(n->right!=NULL){
                q.push(n->right);
            }
        }
    
    return sum;
}