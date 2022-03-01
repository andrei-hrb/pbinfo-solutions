#include <cstring>
int SC(char s[]) {
    size_t size = strlen(s);

    int sum = 0;
    for (size_t i = 0; i < size; ++i) {
        if (s[i] >= '0' and s[i] <= '9') {
            sum += int(s[i] - '0');
        }
    }

    return sum;
}