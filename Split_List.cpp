bool solve(vector<int>& nums) {
    int n = nums.size();
    vector<int>right(n);
    vector<int>left(n);
    left[0]=nums[0];
    right.back()=nums.back();
    for(int i=0;i<n;i++){
        left[i]=max(left[i-1], nums[i]);
    }
    for(int i=n-2;i>=0;i--){
        right[i]=min(right[i+1], nums[i]);
    }
    for(int i=0;i<n-1;i++){
        if(left[i]<right[i+1])
        return true;
    }
    return false;
}