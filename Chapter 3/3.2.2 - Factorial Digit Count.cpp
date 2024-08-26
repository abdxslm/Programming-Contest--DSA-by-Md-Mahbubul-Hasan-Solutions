#include <bits/stdc++.h>
using namespace std;
int digitCount(int n) {
    double sum = 0;
    for(int i = 2; i <= n; ++i) sum += log10(i);
    return sum + 1;
}
int main() {
    int n;
    cin >> n;
    cout << n << "! has " << digitCount(n) << " digits" << endl;
    return 0;
}