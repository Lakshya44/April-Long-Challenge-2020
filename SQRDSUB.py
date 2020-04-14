def check(n):
    if n % 4 != 2:
        return False
    return True
t = int(input())
while t:
    n = int(input())
    v = [int(i) for i in input().split()]
    ans = 0
    for i in range(n):
        if check(abs(v[i])):
            front = 0
            back = 0
            for j in range(i+1,n):
                if v[j]&1:
                    back += 1
                else:
                    break
            for j in range(i-1,-1,-1):
                if v[j]&1:
                    front += 1
                else:
                    break
            size = front + back + 1
            size = (size * (size + 1)) // 2
            front = (front * (front + 1)) // 2
            back = (back * (back + 1)) // 2
            ans += size - front - back
    n = (n * (n + 1)) // 2
    print(n - ans)
    t -= 1