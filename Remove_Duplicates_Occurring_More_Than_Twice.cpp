vector<int> solve(vector<int>& nums) {
    int saved = 0;
    for (int i = 0; i < nums.size();) {
        int j = i + 1;
        while (j < nums.size() && nums[i] == nums[j]) j++;
        for (int a = 0; a < 2 && a < j - i; a++) {
            nums[saved++] = nums[i];
        }
        i = j;
    }
    nums.resize(saved);
    return nums;
}