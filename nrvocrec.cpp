#include <cstring>
int i = -1;
const char vow[] = "aeiouAEIOU";
int nr_vocale(char *v) {
    if (i == strlen(v) - 1)
        return 0;
    ++i;

    if (strchr(vow,v[i])) return 1 + nr_vocale(v);
    else return nr_vocale(v);
}