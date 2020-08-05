ans = 0
for _ in range(int(input())):
    s = input()
    if 'chef' in s or 'che' in s or 'hef' in s or 'ch' in s or 'he' in s or 'ef' in s: ans += 1

print(ans)
