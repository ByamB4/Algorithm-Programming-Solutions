s, n = input().strip(), int(input().strip())
a_count = s.count('a')
total = n % len(s)
l = n // len(s)
if n is 0:
    print(a_count * l)
else:
    b = 0
    for i in range(0, total):
        if s[i] is 'a':
            b = b + 1
    print(int(a_count * l + b))

