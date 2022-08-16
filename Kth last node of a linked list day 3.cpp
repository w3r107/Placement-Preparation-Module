/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node, int k) {
    if(node==NULL){
        return 0;
    }
    LLNode* temp=node;
    int c=0;
    while(temp!=NULL){
      c++;
      temp=temp->next;
    }
    temp=node;
    int a=c-k;
    a--;
    while(a--){
        temp=temp->next;

    }
    return temp->val;
    
}