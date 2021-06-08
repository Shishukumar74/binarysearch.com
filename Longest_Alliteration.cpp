int solve(vector<string>& words) {
    int maximum = 1, current = 1, n = words.size();
    if(n==0) return 0;
    for(int i=1;i<n;i++){
        if(words[i][0]==words[i-1][0]){
            current++;
        }else{
            maximum = max(maximum,current);
            current=1;
        }

    }
    return max(maximum,current);
}