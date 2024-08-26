// Exercise Problem
// Page - 55
#include <bits/stdc++.h>
using namespace std;
map<int, int> primeFactors;
void primeFactorization(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (!(n % i)) {
            while (!(n % i)) {
                n /= i;
                primeFactors[i]++;
            }
        }
        if (n == 1) break;
    }
    if (n != 1) {
        primeFactors[n]++;
    }
}
int nod(int n) {
    int rt = 1;
    for (auto x : primeFactors) rt *= (x.second + 1);
    return rt;
}
int main() {
    int n;
    cin >> n;
    primeFactorization(n);
    cout << "NOD(" << n << ") = " << nod(n) << endl;
    return 0;
}