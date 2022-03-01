#include <cstring>
#include <climits>
int mmi[101][2], mmj[101][2];
int  nr_sa(int a[][100], int n, int m)
{
    int nrsa = 0;
    for (int i = 0; i < n; ++i)
        mmi[i][1] = INT_MAX;

    for (int i = 0; i < m; ++i)
        mmj[i][1] = INT_MAX;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            if (a[i][j] > mmi[i][0])
                mmi[i][0] = a[i][j];
            if (a[i][j] < mmi[i][1])
                mmi[i][1] = a[i][j];
        }

    for (int j = 0; j < m; ++j)
        for (int i = 0; i < n; ++i)
        {
            if (a[i][j] > mmj[j][0])
                mmj[j][0] = a[i][j];
            if (a[i][j] < mmj[j][1])
                mmj[j][1] = a[i][j];
        }


    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (mmi[i][0] == mmj[j][1] || mmj[j][0] == mmi[i][1])
            {
                ++nrsa;
                continue;
            }

   return nrsa;
}