#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, iSum = 0, jSum = 0, kSum = 0, number = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        jSum = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (j == 1)
            {
                jSum += number;
                number++;
            }
            else
            {
                kSum = 1;
                for (int k = 1; k <= j; ++k)
                {
                    kSum *= number;
                    number++;
                }
                jSum += kSum;
            }
        }
        iSum += jSum;
    }
    cout << iSum;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";
    return 0;
}