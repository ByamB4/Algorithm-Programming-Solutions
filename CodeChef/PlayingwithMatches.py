t= int(input())
for _ in range(t):
    a, b = map(int, input().split())
    s = a + b
    S = str(s)
    c = 0
    matches = {'0':6,'1':2,'2':5,'3':5,'4':4,'5':5,'6':6,'7':3,'8':7,'9':6}
    for d in S:
        if d in matches.keys():
            c += matches[d]
    print(c)
