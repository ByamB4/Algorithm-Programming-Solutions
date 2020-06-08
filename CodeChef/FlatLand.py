from math import sqrt

for _ in range(int(input())):
    n, ans = int(input()), 0
    while n:
        ans += 1
        s = int(sqrt(n))
        n = n - s ** 2
    print(ans)
