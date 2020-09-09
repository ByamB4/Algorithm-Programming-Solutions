res = [chr(i) for i in range(97, 123)]
for _ in range(int(input())):
    n = int(input())
    s = list(input())

    for i in range(0, n // 2 * 2 - 1, 2):
        s[i], s[i + 1] = s[i + 1], s[i]
    for i in range(n):
        s[i] = res[-1 * (res.index(s[i]) + 1)]
    print(''.join(s))