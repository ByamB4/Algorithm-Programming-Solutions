from datetime import date

l = ['monday','tuesday','wednesday','thursday','friday','saturday','sunday']
for _ in range(int(input())):
    print(l[date(int(input()) ,1, 1).weekday()])