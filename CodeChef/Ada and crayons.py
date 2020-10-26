from itertools import groupby

for _ in range(int(input())):
    s = input()
    l = [i for i, j in groupby(s)]

    print(min(l.count('U'), l.count('D')))