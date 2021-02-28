for _ in range(0, int(input())):
    n, q = map(int, input().split())
    initial, floors = 0, 0
    for j in range(0, q):
        f, d = map(int, input().split())
        floors += (abs(initial - f) + abs(f - d))
        initial = d
    print(floors)
