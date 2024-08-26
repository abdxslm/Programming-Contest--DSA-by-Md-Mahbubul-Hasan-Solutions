// Euclidean Algorithm to find GCD
// Page - 57
#include <bits/stdc++.h>
using namespace std;
int gcdN(int a, int b) {
    if (!(a % b)) return b;
    return gcdN(b, a % b);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcdN(a, b) << endl;
    return 0;
}