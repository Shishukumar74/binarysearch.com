vector<int> solve(vector<int>& nums) {
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<nums.size();i++){
        if((nums[i]%2)==0)
        even.push_back(nums[i]);
        else 
        odd.push_back(nums[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    int EVEN=0, ODD=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0)
        nums[i]=even[EVEN++];
        else
        nums[i]=odd[ODD++];
    }
    return nums;
}