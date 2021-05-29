int solve(string s) {
    int result = 0;
    for(int i=0;i<s.size();i++){
        int temp = 1;
        while(i+1<s.size() && s[i]==s[i+1])  temp++, i++;
            result = result+(temp)*(temp+1)/2;
            }
      return result;
}