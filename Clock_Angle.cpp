int solve(int hour, int minutes) {
    int difference = abs(300*(hour%12)-55*minutes);
    return min(difference, 3600-difference)/10;
}