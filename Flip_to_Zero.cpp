int solve(vector<int>& nums) {
    int count = 0;
    int ans = 1;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==ans){
            count++;
            ans = !ans;
        }
    }
    return count;

    
}