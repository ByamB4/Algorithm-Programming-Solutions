for _ in range(int(input())):
    a, b = input(), input()
    ans = 0
    for i in a:
        if i in b:
            ans = 1
            break
    print('No') if ans == 0 else print('Yes')
