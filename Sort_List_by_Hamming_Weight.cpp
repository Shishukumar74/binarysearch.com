bool cnt(int a, int b){
    int x = __builtin_popcount(a);
    int y = __builtin_popcount(b);
    if(x>y)
    return false;
    else if(x==y)
    return a<b;
    else
    return true;
}
vector<int> solve(vector<int>& nums) {
    sort(nums.begin(),nums.end(),cnt);
    return nums;
}