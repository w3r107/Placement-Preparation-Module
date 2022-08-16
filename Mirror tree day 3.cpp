void prenode(Node *node)
   {
       if(node==NULL)return;
       
       else
       {
           Node *t= node->left;
           node->left=node->right;
           node->right=t;
           
           prenode(node->left);
           prenode(node->right);
       }
   }
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node==NULL){
            return ;
        }
        prenode(node);
        return;
    }
};