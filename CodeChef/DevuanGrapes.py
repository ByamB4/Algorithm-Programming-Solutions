for _ in range(int(input())):
    n, k = (map(int, input().split()))
    m = input().split()
    for i in range(len(m)):
        m[i] = int(m[i])
    count = 0
    for i in range(n):
        x = m[i] % k
        if m[i] >= k:
            count += min(x, k - x)
        else:
            count += k - x
    print(count)
