t = int(input())
mod = 1000000007
while t:
    n=int(input())
    a=[int(i) for i in input().split()]
    a.sort(reverse=True)
    cost = 0
    for i in range(n):
        if a[i] - i <= 0:
            break;
        cost = (((cost + a[i]) % mod) - i)%mod;
    print(cost)
    t -= 1