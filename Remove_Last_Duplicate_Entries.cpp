    vector<int> solve(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int i : nums) m[i]++;
    vector<int> ans;
    for (int i : nums)
        if (m[i] != 0) {
            ans.push_back(i);
            m[i]--;
            if (m[i] == 1) m[i] = 0;
        }
    return ans;
}
    
