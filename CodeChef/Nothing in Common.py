for _ in range(int(input())):
    n = input()
    n = set(input().split())
    m = set(input().split())

    print(len(n.intersection(m)))