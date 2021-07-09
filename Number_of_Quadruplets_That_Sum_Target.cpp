int solve(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d, int target) {
    unordered_map<int, int>m;
    for(int i:a){
        for(int j:b){
            m[i+j]++;
        }
    }
    int result = 0;
    for(int i:c){
        for(int j:d){
            result += m[target-i-j];
        }
    }
    return result;
    
}