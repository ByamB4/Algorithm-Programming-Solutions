for _ in range(int(input())):
    s = input()
    a, b = s.count('1'), s.count('0')
    print('WIN') if (a > b or a == b) else print('LOSE')
