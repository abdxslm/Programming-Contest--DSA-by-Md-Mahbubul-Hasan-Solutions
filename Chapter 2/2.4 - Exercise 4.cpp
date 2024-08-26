#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0, i = 1, term = 1, numCount = 1, numCountMax = 1;
    while (term <= n)
    {
        sum += i;
        i++;
        if(numCount == numCountMax)
        {
            numCountMax++;
            numCount = 1;
            term++;
            continue;
        }
        numCount++;
    }
    cout << sum << endl;
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