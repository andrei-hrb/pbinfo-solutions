int zerof(int n) {
    int ct = 0;
    for(int i = 1; i <= n; ++i) {
         int x = i;
         int temp = 0;
         while(x % 5 == 0) {
             ++temp;
             x /= 5;
         }
         ct += temp ;
     }
     return ct;
}