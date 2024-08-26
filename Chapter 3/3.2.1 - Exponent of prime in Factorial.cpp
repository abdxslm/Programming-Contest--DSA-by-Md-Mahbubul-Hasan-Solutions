// Page  - 67
#include <bits/stdc++.h>
using namespace std;
int ex(int n, int p) {
    int sum = 0;
    while(n/p) {
        sum += n/p;
        p *= p;
    } 
    return sum;
}
int main() {
    int n, p;
    cin >> n >> p;
    cout << ex(n, p) << endl;
    return 0;
}