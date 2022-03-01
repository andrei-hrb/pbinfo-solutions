#include <climits>
void P(int *x, int n, int &mini, int &maxi, int &sum) {
    mini = INT_MAX;
    maxi = INT_MIN;
    sum = 0;
    
    for (int i = 0; i < n; ++i) {
        if (x[i] < mini)
            mini = x[i];
        
        if (x[i] > maxi)
            maxi = x[i];
        
        sum += x[i];
    }
}