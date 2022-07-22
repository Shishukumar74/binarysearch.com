class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> m;
        for(int i=0;i<allowed.size();i++){
            m[allowed[i]]++;
        }
        int cnt = 0;
        for(int i=0;i<words.size();i++){
            int flag = 0;
            for(int j=0;j<words[i].size();j++){
                if(m[words[i][j]]==0){
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                cnt++;
            }
        }
        return cnt;
    }
};