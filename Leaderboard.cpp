vector<int> solve(vector<int>& nums) {
    set<int>s(nums.begin(), nums.end());
    vector<int>result;
    unordered_map<int, int>rank;
    int j = s.size()-1;
    for(auto i:s) rank[i] = j--;
    for(auto i:nums) result.push_back(rank[i]);
    return result;
}