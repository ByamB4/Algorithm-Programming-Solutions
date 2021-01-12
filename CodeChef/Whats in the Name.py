for _ in range(int(input())):
    s = input().split()
    if len(s) == 1:
        print(s[0].capitalize())
    else:
        for i in range(len(s)):
            if i == len(s) - 1:
                print(s[i].capitalize())
            else:
                print(f'{s[i][0].upper()}. ', end='')
