#include<bits/stdc++.h>
using namespace std;
int nCr(int n, int r) {
    unsigned long long u = 1, d = 1, g;
    if (r > n - r) r = n - r;
    while (r) {
        u *= n--;
        d *= r--;
        g = __gcd(u, d);
        u /= g;
        d /= g;
    }
    return u / d;
}
int main() {
    cout << nCr(3, 2) << endl;
    return 0;
}