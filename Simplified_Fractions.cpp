class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>result;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                if(GCD(i,j)==1){
                    result.push_back(to_string(i) + "/" + to_string(j));
                }
            }
        }
        return result;
        
    }
    int GCD(int a, int b){
        if(b==0)
            return a;
        return GCD(b,a%b);
    }
};