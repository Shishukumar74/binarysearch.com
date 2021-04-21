vector<int> reverseArray(vector<int>& a) {
    int  n = a.size();
    int middle = n/2;
    for(int i=0;i<middle;i++)
    swap(a[i], a[n-i-1]);
    return a;
}