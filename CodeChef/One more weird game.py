for _ in range(int(input())):
    n, m = map(int, input().split())
    a = m + n - 2
    b = (m * n) - a - 1
    ans = (b * 2) + a
    print(ans)
