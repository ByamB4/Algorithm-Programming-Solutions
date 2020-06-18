for _ in range(int(input())):
    n = int(input())
    a = n % 8
    if 1 <= a <= 6:
        if a == 1: s = str(n + 3) + 'LB'
        elif a == 4: s = str(n - 3) + 'LB'
        elif a == 2: s = str(n + 3) + 'MB'
        elif a == 5: s = str(n - 3) + 'MB'
        elif a == 3: s = str(n + 3) + 'UB'
        else: s = str(n - 3) + 'UB'
    else:
        if a == 7: s = str(n + 1) + 'SU'
        else: s = str(n - 1) + 'SL'
    print(s)
