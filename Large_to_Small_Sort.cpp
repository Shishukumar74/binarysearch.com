vector<int> solve(vector<int>& nums) {
    vector<int>ans=nums;
    int n = nums.size();
    int left = 0, right = n-1;
    sort(nums.begin(), nums.end());
    for(int i=0;i<n;i++){
        if(i%2==0)
        ans[i] = nums[right--];
        else
        ans[i] = nums[left++];
    }
    return ans;
}