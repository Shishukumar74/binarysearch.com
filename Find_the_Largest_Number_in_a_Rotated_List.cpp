int solve(vector<int>& arr) {
    int left = 0;
    int right = arr.size()-1;
    while(right-left>1){
        int middle = (right+left)/2;
        if(arr[left]<arr[middle])
        left = middle;
        else
        right = middle;
    }
    return max(arr[left], arr[right]);
}