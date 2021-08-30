bool solve(LLNode* head) {
    while (head->next) {
        if (head->val >= head->next->val) return false;
        head = head->next;
    }
    return true;
}