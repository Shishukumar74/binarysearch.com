int solve(vector<int>& nums) {
    int count = 0, low, high, middle;
    int n = nums.size();
    for(int i:nums){
        low = 0;
        high = n-1;
        while(low<=high){
            middle = (low+high)/2;
            if(nums[middle]==i){
            count++;
            break;
            }
            else if(nums[middle]<i){
            low = middle+1;
            }
            else{
            high = middle-1;
            }


        }
       
    }
    return count;
    
}