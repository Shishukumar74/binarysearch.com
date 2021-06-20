string solve(vector<string>& words) {
    sort(words.begin(), words.end());
    string left = words[0];
    string right = words[words.size()-1];
    string result = "";
    for(int i=0;i<left.size();i++){
        if(left[i] != right[i]) return result;
        result += left[i];
    }
    return result;
    
}