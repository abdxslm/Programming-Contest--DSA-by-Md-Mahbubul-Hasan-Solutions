// Exercise Problem
// Page - 55
#include <bits/stdc++.h>
using namespace std;
map<int, int> primeFactors;
void primeFactorization(int n) {
    for (int i = 2; i * i <= n; ++i) {
        while (!(n % i)) {
            n /= i;
            primeFactors[i]++;
        }
        if (n == 1) break;
    }
    if (n != 1) {
        primeFactors[n]++;
    }
}
int main() {
    int n;
    cin >> n;
    primeFactorization(n);
    for (auto x : primeFactors) {
        cout << x.first << " ^ " << x.second << " * ";
    }
    return 0;
}