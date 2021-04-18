vector<int> solve(int n) {
    vector<int>ans;
    for(int i=2;i<=n;i++){
        bool flag = true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(i);
    }
    return ans;
    
}