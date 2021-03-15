from math import log

for _ in range(int(input())):
    n = int(input())
    b = 2 ** int(log(n, 2)) - 1
    a = n ^ b
    print(a * b)
