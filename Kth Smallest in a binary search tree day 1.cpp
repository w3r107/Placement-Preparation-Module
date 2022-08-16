/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
 int node(Tree* root, int k,int &count,int& ans){
        if(root!=NULL){
            node(root->left,k,count,ans);
            count++;
            if(count==k+1){
                ans=root->val;
                return ans;
            }
            node(root->right,k,count,ans);
        }
        return ans;
    }
int solve(Tree* root, int k) {
   int count=0;
        int ans;
        
       return node(root,k,count,ans);
}