bool solve(vector<int>& rect0, vector<int>& rect1) {
    int width = min(rect0[2], rect1[2]) - max(rect0[0], rect1[0]);
    int height = min(rect0[3], rect1[3]) - max(rect0[1], rect1[1]);
    return width>0 && height>0; 
    
}