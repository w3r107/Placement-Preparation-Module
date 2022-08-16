LLNode* solve(LLNode* node) {
    LLNode* n=NULL;
    while(node!=NULL){
        LLNode* next=node->next;
        node->next=n;
        n=node;
        node=next;
    }
    return n;
}