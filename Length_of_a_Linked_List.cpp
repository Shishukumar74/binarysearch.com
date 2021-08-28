int solve(LLNode* node) {
    int length = 0;
    while(node){
        length++;
        node = node->next;
    }
    return length;
    
}