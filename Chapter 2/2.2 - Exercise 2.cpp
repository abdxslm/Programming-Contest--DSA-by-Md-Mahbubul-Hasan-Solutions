#include <bits/stdc++.h>
using namespace std;
void solve() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    cin >> a >> b >> c;
    double A, B, C;
    C = acos((a * a + b * b - c * c) / (2 * a * b));
    B = acos((a * a + c * c - b * b) / (2 * a * c));
    A = acos((b * b + c * c - a * a) / (2 * b * c));
    printf("A = %lf rad\nB = %lf rad\nC = %lf rad\n", A, B, C);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();
    int t = 1;
    // cin >> t;
    while (t--) solve();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << " ";
    return 0;
}