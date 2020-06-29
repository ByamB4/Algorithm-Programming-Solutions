for _ in range(int(input())):
    n = input()
    s = input().replace('.', '')
    f = 0
    if len(s) % 2: f = 1
    else:
        for i in range(0, len(s) - 1, 2):
            if s[i] == 'H' and s[i + 1] == 'T':
                continue
            else:
                f = 1
                break
    if f == 0: print('Valid')
    else: print('Invalid')
