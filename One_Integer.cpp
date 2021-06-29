int solve(vector<int>& nums){
    priority_queue<int, vector<int>, greater<int>>pq;
    int result = 0;
    for(int i=0;i<nums.size();++i){
        pq.push(nums[i]);
    }
    int a, b, sum;
    while(pq.size()>1){
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        sum = a+b;
        result += sum;
        pq.push(sum);
    }
    return result;
}