class TwoSum {
    private:
    vector<int>nums;
    public:
    TwoSum() {
        vector<int>temp;
        nums = temp;
    }
        void add(int val) {
        nums.push_back(val);
        
    }

    bool find(int val) {
        sort(nums.begin(), nums.end());
        if(nums.size()<=1 || nums.empty()) return false;
        int l=0, r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==val)
            return true;
            else if(nums[l]+nums[r]>val)
            r--;
            else
            l++;
        }
        return false;
    }
};