class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>cnt;
        int res = 0;
        for(int i:deck) cnt[i]++;
        for(auto i:cnt) res = GCD(i.second,res);
        return res>1;
        
    }
    
    int GCD(int a, int b){
        if(b==0)
            return a;
        return GCD(b,a%b);
    }
};