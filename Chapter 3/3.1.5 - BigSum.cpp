// Page - 63
// Time Complexity - O(logn)
#include <bits/stdc++.h>
using namespace std;
int bigmod(int a, int b, int m) {
    if (b == 0) return 1 % m;
    int x = bigmod(a, b / 2, m);
    x = (x * x) % m;
    if (!(b % 2)) x = (x * a) % m;
    return x;
}
int bigsum(int a, int b, int m) {
    if (b == 1) {
        return 1 % m;
    }
    else if (!(b % 2)) {
        int x = bigsum(a, b / 2, m);
        return (x % m + bigmod(a, b / 2, m)%m)%m;
    }
    return (1%m + (a%m * bigsum(a, b - 1, m)%m)%m)%m;
}
int main() {
    int a, b, m;
    cin >> a >> b >> m;
    cout << bigmod(a, b, m) << endl;
    return 0;
}