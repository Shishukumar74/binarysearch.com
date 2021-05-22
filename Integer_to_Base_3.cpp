   bool isNegative = n < 0;
    n = abs(n);
    string ans = "";
    do{
        ans = to_string(n % 3) + ans;
    }while (n /= 3);
    return (isNegative ? "-" : "") + ans;
   