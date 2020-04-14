t = int(input())
while t:
    n=int(input())
    a=[int(i) for i in input().split()]
    b = []
    for i in range(n):
        if a[i]:
            b.append(i)
    f = 0
    for i in range(len(b)-1):
        if b[i+1] - b[i] < 6:
            f += 1
            break
    if f:
        print("NO")
    else:
        print("YES")
    t -= 1