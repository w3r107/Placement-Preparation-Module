LLNode* solve(LLNode* node) {
   LLNode* t=node;
   while(t!=NULL&&t->next!=NULL){
       swap(t->val,t->next->val);
       t=t->next->next;
   } 
   return node;
}