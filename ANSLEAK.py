import random
t = int(input())
while t:
    n , m , k = [int(i) for i in input().split()]
    v = []
    l = 0
    while n:
        a = [int(i) for i in input().split()]
        print(random.choice(a),end=" ")
        l += 1
        n -= 1
    print()
    t -= 1