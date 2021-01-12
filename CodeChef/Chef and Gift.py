for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    l = list(map(int, input().split()))
    c = 0
    for i in range(len(l)):
        if l[i]%2 == 0:
            c += 1
    if c == n and k == 0:
        print('NO')
    elif c >= k:
        print('YES')
    else:
        print('NO')
