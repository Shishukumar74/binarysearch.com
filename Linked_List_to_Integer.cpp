int solve(LLNode* node) {
    int num = 0;

    while (node) {
        num = num * 2 + node->val;
        node = node->next;
    }
    return num;
}