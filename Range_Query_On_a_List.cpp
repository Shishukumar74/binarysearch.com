class RangeSum {
    public:
    RangeSum(vector<int>& nums) {
        prefix.resize(nums.size()+1);
        prefix[0] = 0;
        for(int i=1;i<=nums.size();i++)
        prefix[i] = prefix[i-1]+nums[i-1];
        }
        int total(int i, int j) {
        return prefix[j] - prefix[i];
    }
    private:
    vector<int>prefix;
};