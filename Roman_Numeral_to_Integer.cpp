int solve(string numeral) {
    map<char,int>val={{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500},{'M',1000}};
    int total = 0;
    for(int i=0;numeral[i]!='\0';i++){
        if(val[numeral[i]]>=val[numeral[i+1]]){
            total = total+val[numeral[i]];
        }else{
            total = total-val[numeral[i]];
        }
    }
    return total;
    
}