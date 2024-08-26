#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, i = 0, palindromeCounter = 0;
    cin >> n;
    string str;
    while (1) {
        str = to_string(i);
        int l = 0, r = str.size() - 1;
        bool palindrome = true;
        while (l < r) {
            if (str[l++] != str[r--]) {
                palindrome = false;
                break;
            }
        }
        if (palindrome) palindromeCounter++;
        if (palindromeCounter == n) break;
        i++;
    }
    printf("The nth palindrome is %d", i);
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