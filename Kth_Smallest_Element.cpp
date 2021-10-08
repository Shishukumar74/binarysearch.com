int solve(vector<int>& nums, int k) {
    priority_queue<int> p;
    for (int i = 0; i < nums.size(); i++) {
        if (p.size() <= k)
            p.push(nums[i]);
        else {
            if (p.top() > nums[i]) {
                p.pop();
                p.push(nums[i]);
            }
        }
    }
    return p.top();
}