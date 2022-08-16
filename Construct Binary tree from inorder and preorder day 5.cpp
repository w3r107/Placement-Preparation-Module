/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int findIndex(vector<int> &inorder, int i, int j, int val)
{
    for (auto b = i; b<=j; ++b)
        if (inorder[b]==val)
            return b;
}
 TreeNode* solve(vector<int> &A, vector<int> &B,int s,int e,int &p){
    if (s>e)
        return NULL;
    TreeNode* node=new TreeNode(A[p++]);
    if (s==e)
        return node;
    int in = findIndex(B, s, e,node->val);
    node->left = solve(A, B, s, in-1, p);
    node->right = solve(A, B, in+1, e, p);
    
    return node;
 }
 
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int p=0;
    return solve(A,B,0,B.size()-1,p);
}
