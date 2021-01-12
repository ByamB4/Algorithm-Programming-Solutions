from math import sqrt

for _ in range(int(input())):
    n, ret = int(input()), 0
    while n:
        ret += 1
        s = int(sqrt(n))
        n = n - s ** 2
    print(ret)
