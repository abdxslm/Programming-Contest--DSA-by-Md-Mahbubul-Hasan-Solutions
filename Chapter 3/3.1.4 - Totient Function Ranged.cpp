// Totient(n) = The number of which are co-primes of n which are not greater than n.
#include <bits/stdc++.h>
#define N 1000000
using namespace std;
vector<int> primes;
vector<bool> isPrime(N + 1, true);
vector<int> phi(N + 1);
void sieve() {
    isPrime[0] = false;
    isPrime[1] - false;
    for (int i = 4; i <= N; i += 2) isPrime[i] = false;
    for (int i = 3; i * i <= N; i += 2) {
        for (int j = i * i; j <= N; j += 2 * i) {
            isPrime[j] = false;
        }
    }
    for (int i = 2; i <= N; ++i) if (isPrime[i]) primes.push_back(i);
}
void totient() {
    for (int i = 0; i <= N; ++i) phi[i] = i;
    for (auto x : primes) {
        for (int y = x; y <= N; y += x) phi[y] = phi[y] / x * (x - 1);
    }
}
int main() {
    sieve();
    int n;
    cin >> n;
    totient();
    for (int i = 2; i <= n; ++i) cout << "phi(" << i << ") = " << phi[i] << endl;
    return 0;
}