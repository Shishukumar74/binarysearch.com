bool solve(vector<int>& nums) {
    int n = nums.size(), top = -1, cnt = 0;
    vector<int> st(n);
    for (int i = 0; i < n; i++) {
        if (top > -1 && nums[i] == st[top]) {
            top--;
            cnt++;
        } else
            st[++top] = nums[i];
    }
    return cnt % 2;
}
 