vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    for(int i = n-1;i>=0;--i){
        ++nums[i];
        if(nums[i]>=10){
            nums[i] = nums[i]%10;
            if(i==0) nums.insert(nums.begin(), 1);
        }else
        break;
    }
    return nums;
    
}