LNode* solve(LLNode* node, int target) {
    if(not node) return node;
    node->next = solve(node->next, target);
    return node->val == target ? node->next : node;
}