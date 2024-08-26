// 3.1.2
// Time Complexity O(nlogn)
#include<bits/stdc++.h>
#define N 100
using namespace std;
vector<int> divisors[N + 1];
void divisorCalculate() {
    for (int i = 1; i <= N; i++)
        for (int j = i; j <= N; j += i)
            divisors[j].push_back(i);
}
int main() {
    divisorCalculate();
    for (auto x : divisors) {
        for (auto y : x) cout << y << " ";
        cout << endl;
    }
    return 0;
}