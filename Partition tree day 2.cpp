/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    if(root==NULL){
        return {0,0};
    };
    queue<Tree*> q;
   q.push(root);
int c=0,d=0;
   while(!q.empty()){
       Tree* f=q.front();
       q.pop();
       if(f->left==NULL&&f->right==NULL){
           c++;
       }
       if(f->left!=NULL||f->right!=NULL){
           d++;
       }
       if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL){
            q.push(f->right);
        }
   }
   return {c,d};
}