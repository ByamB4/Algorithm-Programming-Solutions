a = list(input())
b = list(input())


imin = min(len(a), len(b))

if a == b:
    print(0)
    exit()

for _ in range(0, imin):
    if a[_] != b[_]:
        print(_+1)
        exit()

print(imin+1)

