bool solve(string typed, string target) {
    int i = 0;
    int num = target.size();
    for(int j = 0; j<typed.size(); j++){
        if(typed[j]==target[i]){
            if((typed[j+1]!=target[i] || target[i]==target[i+1]) && i<num) i++;
        }else
        return false;
    }
    return i == num;
    
}