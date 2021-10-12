vector<int> solve(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    vector<int> res;
    for(int i = 0, dis = 0; i < nums.size(); i++) {
        if(m[nums[i]]++ == 0) dis += 1;
        if(i >= k and m[nums[i-k]]-- == 1) dis -= 1; 
        if(i >= k - 1) res.push_back(dis);
    }
    return res;
}