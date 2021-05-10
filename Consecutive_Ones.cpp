bool solve(vector<int>& nums) {
    int previous = -1;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            if(previous != -1 && i-previous > 1)
            return false;
            else
            previous = i;
        }
    }
    return true;

    
}