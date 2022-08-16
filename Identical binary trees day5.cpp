int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL&&B==NULL)
    return 1;
    if(A!=NULL&&B==NULL||A==NULL&&B!=NULL)
    return 0;
    if(A->val==B->val&&(isSameTree(A->left,B->left))&&(isSameTree(A->right,B->right))){
        return 1;
    }
    else{
        return 0;
    }
}
