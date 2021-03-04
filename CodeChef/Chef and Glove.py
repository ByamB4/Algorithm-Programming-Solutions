for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    g = list(map(int, input().split()))
    gr = list(map(int, reversed(g)))
    r = [1, 1]
    for i in range(n):
        if g[i] < l[i]:
            r[0] = 0
            break
    for j in range(n):
        if gr[j] < l[j]:
            r[1] = 0
            break
    if r.count(1) == 2:
        print('both')
    elif r[0] == 1: print('front')
    elif r[1] == 1: print('back')
    else: print('none')
