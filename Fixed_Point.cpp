int solve(vector<int>& nums) {
    if(nums.size()==0)
    return -1;
    int left = 0;
    int right = nums.size()-1;
    int mid;
    while(left<right){
        mid = (left+right)/2;
        if(nums[mid]>=mid)
        right = mid;
        else
        left = mid+1;

    }
    if(nums[left]==left) return left;
    return -1;
    
}