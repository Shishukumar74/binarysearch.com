bool solve(vector<string>& moves, int x, int y) {
    int n = moves.size();
    int X = 0, Y = 0;
    for(int i=0;i<n;i++){
        if(moves[i][0] == 'E')
       {
            X = X+1;
       }
         else if(moves[i][0] == 'W')
        {
            X = X-1;
        }
         else if(moves[i][0] == 'N')
        {
            Y = Y+1;
        }
        else if (moves[i][0] == 'S')
        {
            Y = Y-1;
        }
    }
    return x==X && y==Y;

    
}