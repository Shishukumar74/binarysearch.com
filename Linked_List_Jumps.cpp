LLNode* solve(LLNode* node) {
    LLNode* head = node;
    while (node && node->next) {
        int nxt = node->val;
        while (--nxt && node->next) {
            node->next = node->next->next;
        }
        node = node->next;
    }
      return head;
}