bool solve(string s) {
    int left = 0, right = s.length()-1;
    while(left<=right){
        while(s[left] > 'z' || s[left] < 'a') left++;
        while(s[right] > 'z' || s[right] < 'a') right--;
        if(left<=right && s[left] != s[right]) return false;
        left++, right--;
    }
    return true;
    
}