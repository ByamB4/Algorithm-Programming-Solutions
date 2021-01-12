for _ in range(int(input())):
    n, k = map(int, input().split())
    e = n - 2 * k
    a = sorted(list(map(int, input().split())))
    ans = 0
    for s in range(k):
        del a[0]
        del a[-1]
    for c in a:
        ans += int(c)
    ans = ans / e
    print(format(ans, '.6f'))
