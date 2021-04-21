int solve(vector<int>& nums) {
    unordered_map<int, int>M;
    int n = nums.size();
    int cnt = 0;
    for(int i = 0; i<n; i++){
        M[nums[i]]++;
    }
    for(auto m : M){
    if(M.find(m.first+1) != M.end()) cnt = cnt+m.second;
    }
    return cnt;
    
}