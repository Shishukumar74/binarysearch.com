int solve(int n) {
     int maxDigit = -1;
   int maxDigitIndex = -1;
   int startIndex = -1;
   int endIndex = -1;
   string nInStr = to_string(n);
   for (int i = nInStr.size() - 1; i >= 0; i--) {
      if (nInStr[i] > maxDigit) {
         maxDigit = nInStr[i];
         maxDigitIndex = i;
         continue;
      }
      if (nInStr[i] < maxDigit) {
         startIndex = i;
         endIndex = maxDigitIndex;
      }
   }
   if (startIndex == -1) {
      return n;
   }
   swap(nInStr[startIndex], nInStr[endIndex]);
   return stoi(nInStr);
    
}