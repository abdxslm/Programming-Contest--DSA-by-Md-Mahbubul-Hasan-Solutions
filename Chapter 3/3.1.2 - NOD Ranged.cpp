// Page - 56
#include <bits/stdc++.h>
#define N 100
using namespace std;
vector<int> primes;
vector<bool> isPrime(N + 1, true);
pair<int, map<int, int>> primeFactors[N + 1];
vector<int> nod(N + 1, 1);
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
void primeFactorization() {
    for (int i = 0; i <= N; ++i) primeFactors[i].first = i;
    for (auto x : primes) {
        for (int y = x; y <= N; y += x) {
            while (primeFactors[y].first % x == 0) {
                primeFactors[y].first /= x;
                primeFactors[y].second[x]++;
            }
        }
    }
}
void NOD() {
    int i = 0;
    for (auto x : primeFactors) {
        for (auto y : x.second) {
            nod[i] *= (y.second + 1);
        }
        i++;
    }
}
int main() {
    sieve();
    primeFactorization();
    NOD();
    int i = 0;
    for (auto x : nod) {
        cout << "NOD(" << i++ << ") = " << x << endl;
    }
    return 0;
}