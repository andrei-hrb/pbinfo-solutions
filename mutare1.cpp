int imp[10001], par[10001];
void aranjare(int *v, int n)
{
    int iimp = 0, ipar = 0;
    for (int i = 0; i < n; ++i)
        if (v[i] % 2 == 1)
        {
            imp[iimp] = v[i];
            ++iimp;
        }
        else
        {
            par[ipar] = v[i];
            ++ipar;
        }


    int i = 0;
    for (int l = 0; l < iimp; ++l, ++i)
        v[i] = imp[l];
    for (int l = 0; l < ipar; ++l, ++i)
        v[i] = par[l];
}