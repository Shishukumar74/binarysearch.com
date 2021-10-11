vector<int> solve(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> heap, res;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            heap.push_back(sum);
        }
    }
    make_heap(heap.begin(), heap.end());
    while (k--) {
        res.push_back(heap.front());
        pop_heap(heap.begin(), heap.end());
        heap.pop_back();
    }
    sort(res.begin(), res.end());
    return res;
}