class Solution {
public:
    int countLargestGroup(int n) {
        vector<int>count(37);
        int max_size=0;
        for(int i=1;i<=n;++i){
            max_size = max(max_size, ++count[digitsum(i)]);
        }
        int res=0;
        for(int i=0;i<count.size();++i){
            if(count[i]==max_size)
                res++;
        }
        return res;
        
    }
         int digitsum(int num){
         int sum = 0;
         while(num!=0){
             sum += num%10;
             num /= 10;
         }
         return sum;
     }
};