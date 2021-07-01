for _ in range(int(input())):
    (n, s) = map(int, input().split())
    p = list(map(int, input().split()))
    o = list(map(int, input().split()))
    zero, one = [], []
    money = 100 - s
    i = 0
    while i < n:
        if o[i] == 0:
            zero.append(p[i])
        else:
            one.append(p[i])
        i += 1
    if len(zero) > 0 and len(one) > 0 and min(zero) + min(one) <= money:
        print('yes')
    else:
        print('no')

