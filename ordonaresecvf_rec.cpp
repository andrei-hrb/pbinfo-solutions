//quickSort lmao
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int v[], int low, int high) {
    int pivot = v[high];
    int index = low - 1;

    for (int j = low; j < high; ++j)
        if (v[j] < pivot) {
            ++index;
            swap(&v[index], &v[j]);
        }

    swap(&v[index + 1], &v[high]);
    return index + 1;
}

int ordonare(int v[], int n, int low, int high) {
    if (low < high) {
        int part = partition(v, low, high);

        ordonare(v, n, low, part - 1);
        ordonare(v, n, part + 1, high);
    }
}