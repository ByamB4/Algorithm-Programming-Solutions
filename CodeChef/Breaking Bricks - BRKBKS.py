for _ in range(int(input())):
    s, w1, w2, w3 = map(int, input().split())
    x = w1 + w2 + w3
    c = 0
    if s >= x: print(1)
    elif s >= x - w1 or s >= x - w3: print(2)
    else: print(3)
