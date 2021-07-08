for _ in range(int(input())):
    n = int(input())
    c = input()
    chef = input()
    s = list(map(int, input().split()))
    cnt = 0
    for i in range(n):
        if c[i] == chef[i]:
            cnt += 1
    if cnt == n:
        print(s[n])
    else:
        print(max(s[:cnt + 1]))
