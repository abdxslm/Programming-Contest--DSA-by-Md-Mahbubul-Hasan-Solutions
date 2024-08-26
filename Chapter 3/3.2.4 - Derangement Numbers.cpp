#include<bits/stdc++.h>
using namespace std;
int derrangement(int n) {
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else return (n - 1) * (derrangement(n - 1) + derrangement(n - 2));
}
int main() {
    int n = 3;
    cout << derrangement(n) << endl;
    return 0;
}