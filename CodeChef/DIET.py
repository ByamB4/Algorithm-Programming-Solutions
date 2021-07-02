for _ in range(int(input())):
    a, b = map(int, input().split())
    arr = list(map(int, input().split()))
    i = 1
    p = 0
    for num in arr:
        p += num
        p -= b
        if p < 0:
            print('NO', end=' ')
            print(i)
            break
        i += 1
    else:
        print('YES')
