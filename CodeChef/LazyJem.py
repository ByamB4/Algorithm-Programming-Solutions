for _ in range(int(input())):
    a, b, c = list(map(int, input().split()))
    ans = 0
    while a > 0:
        if a % 2 == 1:
            solved = (a + 1) / 2
        else:
            solved = (a / 2)
        ans += solved * c
        a -= solved
        if a >= 0:
            ans += 1
        c *= 2
    print(int(ans))
