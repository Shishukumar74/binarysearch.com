bool solve(string s) {
    string x = " ";
    for(int i=0;i<s.size()/2;i++){
        x = s.substr(0, i+1);
        int y = stoi(x);
        while(x.size()<s.size()){
            y--;
            x = x+to_string(y);
    }
    if(s==x){
        return true;
    }
    }
    return false;
    
}