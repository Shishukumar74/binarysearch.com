int solve(vector<int>& nums) {
     int num = nums.size();
    vector<int> bucket(num + 1, 0);

    for (int value : nums) {
        if (value < num)
            bucket[value]++;
        else
            bucket[num]++;
    }

    int k = 0;
    for (int i = num; i >= 0; i--) {
        k += bucket[i];
        if (k == i) return k;
    }

    return -1;
    
}