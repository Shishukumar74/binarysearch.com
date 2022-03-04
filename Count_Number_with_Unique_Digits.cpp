class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)
            return 1;
        int unique_digit = 9, avilable_digit = 9, ans = 10;
        for(int i=0;i<n-1;i++){
            unique_digit *= avilable_digit;
            ans += unique_digit;
            avilable_digit--;
        }
        return ans;
    }
};