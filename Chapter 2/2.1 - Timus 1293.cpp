#include <bits/stdc++.h>
using namespace std;
void solve() {
    int N, A, B;
    cin >> N >> A >> B;
    cout << N*A*B*2;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}