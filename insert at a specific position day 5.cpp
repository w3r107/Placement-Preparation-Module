/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int pos, int val) {
    LLNode* newnode= new LLNode();
    newnode->val=val;
    newnode->next=NULL;
    if(head==NULL){
      return head=newnode;
    }
    else if(pos==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    else{
        LLNode* next=head;
        for(int i=0;i<pos-1;i++){
             next=next->next;
        }
        newnode->next=next->next;
        next->next=newnode;
        return head;
    }
}