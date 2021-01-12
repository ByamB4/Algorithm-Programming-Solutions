for _ in range(int(input())):
    s = input()
    balance, max_balance = 0, 0
    for i in range(0, len(s)):
        if s[i] == '(': balance += 1
        if s[i] == ')': balance -= 1
        max_balance = max(max_balance, balance)
    print('(' * max_balance + ')' * max_balance)
