for _ in range(int(input())):
    arr = list(map(int, input().split()))
    n = len(arr) - 1
    arr.remove(n)
    print(max(arr))
