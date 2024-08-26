// 3.1.1
// Time Complexity O(nloglogn)
#include<bits/stdc++.h>
using namespace std;
vector<bool> isPrime(10000 + 1, 1);
vector<int> primes;
void sieve() {
    isPrime[0] = false, isPrime[1] = false;
    for (int i = 4; i < 10000 + 1; i += 2) isPrime[i] = false;
    for (int i = 3; i * i < 10000 + 1; i += 2) {
        if (isPrime[i] == true) {
            for (int j = i * i; j < 10000 + 1; j += 2*i) {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for(int i = 3; i < 10000 + 1; i += 2) if(isPrime[i]) primes.push_back(i);
}
int main() {
    sieve();
    for(auto x: primes) cout << x << " ";
    return 0;
}