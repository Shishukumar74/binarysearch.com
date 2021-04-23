int solve(int start, int end) {
    int count = 0;
    while(end/2 >= start){
        if(end%2)
        end--;
        else
        end /= 2;
        count++;

    }
    return count+end-start;
    
}