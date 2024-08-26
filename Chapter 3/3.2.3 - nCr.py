import math
def nCr(n, r):
    u = d = 1
    if(r > n - r):
        r = n - r
    while(r):
        u *= n; d *= r
        g = math.gcd(u, d)
        u /= g; d /= g
        n -= 1; r -= 1
    return u/d


n, r = map(int, input().split())
print(int(nCr(n, r)))