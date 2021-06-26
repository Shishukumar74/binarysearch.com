bool solve(string s) {
    for(int i=0;i<s.size();++i){
        if(s[i]=='b'){
            for(int j=i+1;j<s.size();++j){
                if(s[j]=='i'){
                    int gap = j-i;
                    string ans;
                    for(int k = j+gap;k<s.size();k+=gap){
                        ans += s[k];
                        if(ans.size()==10) break;
                    }
                    if(ans == "narysearch") return true;
                }
            }
        }
    }
    return false;
    
}