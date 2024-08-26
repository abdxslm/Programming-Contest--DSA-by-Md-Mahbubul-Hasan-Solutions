/*  While the Euclidean algorithm calculates only the greatest common divisor (GCD) of two integers  
    a and b , the extended version also finds a way to represent GCD in terms of a  and b 
    i.e. coefficients  x  and  y for which:
    ax + by = gcd(a, b) 
    It's important to note that by Bézout's identity we can always find such a representation.
*/
#include<bits/stdc++.h>
using namespace std;
int egcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    int x1, y1;
    int g = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}
int main() {
    int a, b, x, y;
    cin >> a >> b;
    cout << "GCD(" << a << ", " << b << ") = " << egcd(a, b, x, y) << " = " << a << "*" << x << " + " << b << "*" << y << endl;
    return 0;
}