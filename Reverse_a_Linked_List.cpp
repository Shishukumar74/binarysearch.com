LLNode* solve(LLNode* node) {
    LLNode *curr = node, *prev = NULL, *next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
