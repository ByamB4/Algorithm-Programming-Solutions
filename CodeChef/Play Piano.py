for _ in range(int(input())):
    s, can = input(), True
    for i in range(0, len(s), 2):
        if s[i:i+2].count('A') != 1:
            can = False
            break
    print('yes') if can else print('no')
    
