vowels = ['a', 'e', 'i', 'o', 'u']

for _ in range(int(input())):
    n, ans = input(), 0
    s = input()
    for i in range(1, len(s)): 
        if s[i] in vowels and s[i - 1] not in vowels: ans += 1
    print(ans)
