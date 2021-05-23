bool solve(vector<int>& nums) {
    unordered_map<int,int>ump;
    for(int i=0;i<nums.size();i++){
        ump[nums[i]]++;
    }
    for(auto x:ump){
        if(x.first==x.second){
            return true;
        }
    }
    return false;

}