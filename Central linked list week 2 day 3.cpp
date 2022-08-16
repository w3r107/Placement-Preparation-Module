int solve(LLNode* node) {
    LLNode* tmp=node;
    int c=0;
    while(tmp!=NULL){
        c++;
        tmp=tmp->next;
    }
    c=c/2;

while(c--){
    node=node->next;
}
int d=node->val;
return d;
}