class Solution {
public:
    int twoEggDrop(int n) {
        return ceil((-1.0+sqrt(1+8*n))/2.0);
        
    }
};