for _ in range(int(input())):
    n, k = map(int, input().split())
    a = 1
    for i in range(1, k):
        a = a * (n - k + i)
        a = a // i
    print(int(a))
