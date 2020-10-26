def isCan(n):
    n = str(n)
    if n[::-1] == n: return True
    return False

for _ in range(int(input())):
    k = int(input())
    while True:
        k += 1
        if isCan(k):
            print(k)
            break
