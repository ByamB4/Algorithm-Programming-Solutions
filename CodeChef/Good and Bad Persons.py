for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    c = m = 0
    for i in range(len(s)):
        if s[i].isupper(): c += 1
        else: m += 1
    if c <= k and m <= k: print('both')
    elif c <= k and m > k: print('chef')
    elif m > k and c > k: print('none')
    else: print('brother') 
